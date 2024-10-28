																				// Unit1.cpp
#include "Unit1.h"
#include <cwctype>

CVigenere::CVigenere(const std::wstring& key) : key_(key) {
	initializeAlphabet();
}

// Implementaci�n del m�todo para cifrar (encriptar) un texto
std::wstring CVigenere::encrypt(const std::wstring& text) {
	std::wstring result;
	size_t key_length = key_.length();
	for (size_t i = 0, j = 0; i < text.length(); ++i) {
		wchar_t c = text[i];
		if (isSpanishLetter(c)) {
			wchar_t k = key_[j % key_length];
			if (iswupper(c)) {
				c = ((c - L'A') + (towupper(k) - L'A')) % alphabet_size_ + L'A';
			} else {
				c = ((c - L'a') + (towlower(k) - L'a')) % alphabet_size_ + L'a';
			}
			j++;
		}
		result += c;
	}
	return result;
}
						  //PEGAR AQUI DEENCRIPTAR
std::wstring CVigenere::decrypt(const std::wstring& text) {
	std::wstring result;
	size_t key_length = key_.length();
	for (size_t i = 0, j = 0; i < text.length(); ++i) {
		wchar_t c = text[i];
		if (isSpanishLetter(c)) {
			wchar_t k = key_[j % key_length];
			 if (iswupper(c)) {
				 c = ((c - L'A') + (towupper(k) - L'A')) % alphabet_size_ + L'A';
			 } else {
				 c = ((c - L'a') + (towlower(k) - L'a')) % alphabet_size_ + L'a';
			 }
			j++;
		}
		result += c;
	}
	return result;
}


void CVigenere::initializeAlphabet() {
	// Inicializa los alfabetos y mapeos necesarios
	alphabet_upper_ = L"ABCDEFGHIJKLMN�OPQRSTUVWXYZ";
	alphabet_lower_ = L"abcdefghijklmn�opqrstuvwxyz";
	alphabet_size_ = alphabet_upper_.size();
	// Completa los mapeos de letras a �ndices
}

bool CVigenere::isSpanishLetter(wchar_t c) {
	// Verifica si el car�cter est� en el alfabeto espa�ol
	return (alphabet_upper_.find(c) != std::wstring::npos) || (alphabet_lower_.find(c) != std::wstring::npos);
}
