#include <map>
#include <vector>

class CVigenere {

public:
    CVigenere(const std::wstring& key);

    std::wstring encrypt(const std::wstring& text);
    std::wstring decrypt(const std::wstring& text);

private:
    std::wstring key_;

    std::map<wchar_t, size_t> char_to_index_;
    std::map<size_t, wchar_t> index_to_char_upper_;

    std::wstring alphabet_upper_;
    size_t alphabet_size_;

    std::vector<std::vector<wchar_t> > vigenere_table_;

    void initializeAlphabet();
    bool isSpanishLetter(wchar_t c);

};