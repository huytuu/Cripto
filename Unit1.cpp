
#include "Unit1.h"
#include <cwctype>

// Constructor: Inicializa la clave y el alfabeto
CVigenere::CVigenere(const std::wstring& clave) : clave(clave) {
    inicializarAlfabeto();
}

// Inicializa el alfabeto espa�ol con � y construye la tabla de Vigen�re
void CVigenere::inicializarAlfabeto() {
    alfabeto = L"ABCDEFGHIJKLMN�OPQRSTUVWXYZ";  // Alfabeto con �
	tamanoAlfabeto = alfabeto.size();  // Deber�a ser 27

    // Construir la tabla de Vigen�re
    tablaVigenere.resize(tamanoAlfabeto, std::vector<wchar_t>(tamanoAlfabeto));
    for (size_t i = 0; i < tamanoAlfabeto; ++i) {
        for (size_t j = 0; j < tamanoAlfabeto; ++j) {
			tablaVigenere[i][j] = alfabeto[(i + j) % tamanoAlfabeto];
        }
    }
}

// Devuelve el �ndice de una letra en el alfabeto
size_t CVigenere::obtenerIndice(wchar_t c) {
    return alfabeto.find(towupper(c));  // Convierte a may�scula para comparar
}

// Devuelve el car�cter correspondiente a un �ndice del alfabeto
wchar_t CVigenere::obtenerCaracter(size_t indice) {
    return alfabeto[indice % tamanoAlfabeto];
}

// Verifica si el car�cter es una letra v�lida del alfabeto espa�ol
bool CVigenere::esLetraEspanola(wchar_t c) {
    return alfabeto.find(towupper(c)) != std::wstring::npos;
}

// Cifra el texto utilizando la clave con la f�rmula de Vigen�re
std::wstring CVigenere::encrypt(const std::wstring& texto) {
    std::wstring resultado;
    size_t longitudClave = clave.length();

    for (size_t i = 0, j = 0; i < texto.length(); ++i) {
        wchar_t c = texto[i];
        if (esLetraEspanola(c)) {
            size_t indiceTexto = obtenerIndice(c);
            size_t indiceClave = obtenerIndice(clave[j % longitudClave]);

            // F�rmula del cifrado: (M_i + K_i) % N
            size_t indiceCifrado = (indiceTexto + indiceClave) % tamanoAlfabeto;
            wchar_t caracterCifrado = obtenerCaracter(indiceCifrado);

            resultado += caracterCifrado;
            j++;  // Avanza en la clave solo si se cifra una letra
        } else {
            resultado += c;  // Mantiene caracteres no alfab�ticos sin cifrar
        }
    }
	return resultado;
}

// Descifra el texto utilizando la clave con la f�rmula de Vigen�re
std::wstring CVigenere::decrypt(const std::wstring& texto) {
    std::wstring resultado;
    size_t longitudClave = clave.length();

    for (size_t i = 0, j = 0; i < texto.length(); ++i) {
		wchar_t c = texto[i];
        if (esLetraEspanola(c)) {
            size_t indiceCifrado = obtenerIndice(c);
            size_t indiceClave = obtenerIndice(clave[j % longitudClave]);

			// F�rmula del descifrado: (C_i - K_i + N) % N
            size_t indiceOriginal = (indiceCifrado + tamanoAlfabeto - indiceClave) % tamanoAlfabeto;
			wchar_t caracterOriginal = obtenerCaracter(indiceOriginal);

            resultado += caracterOriginal;
            j++;  // Avanza en la clave solo si se descifra una letra
        } else {
            resultado += c;  // Mantiene caracteres no alfab�ticos sin descifrar
        }
    }
    return resultado;
}

