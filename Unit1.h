#include <vector>
#include <string>
#include <cwctype>  // Para towupper

class CVigenere {

public:
    CVigenere(const std::wstring& clave);

    std::wstring encrypt(const std::wstring& texto);
    std::wstring decrypt(const std::wstring& texto);

private:
    std::wstring clave;
    std::wstring alfabeto;
    size_t tamanoAlfabeto;

    std::vector<std::vector<wchar_t> > tablaVigenere;

    void inicializarAlfabeto();
    size_t obtenerIndice(wchar_t c);
    wchar_t obtenerCaracter(size_t indice);
    bool esLetraEspanola(wchar_t c);
};