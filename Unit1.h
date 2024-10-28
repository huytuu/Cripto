#include <map> // Cambia unordered_map por map

class CVigenere {

public:
    CVigenere(const std::wstring& key);

    std::wstring encrypt(const std::wstring& text);
    std::wstring decrypt(const std::wstring& text);

private:
    std::wstring key_;

    // Cambia unordered_map a map
    std::map<wchar_t, size_t> char_to_index_;
    std::map<size_t, wchar_t> index_to_char_upper_;
    std::map<size_t, wchar_t> index_to_char_lower_;

    std::wstring alphabet_upper_;
    std::wstring alphabet_lower_;
    size_t alphabet_size_;

    void initializeAlphabet();
    bool isSpanishLetter(wchar_t c);

};

