//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"  // Aseg�rate de que este encabezado est� incluido

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button3Click(TObject *Sender)
{

			// Usar UnicodeString para trabajar con los componentes de VCL
	UnicodeString key = MemoClave->Text;
	UnicodeString inputText = MemoInput->Lines->Text;

	// Convertir UnicodeString a std::wstring
	std::wstring wkey = key.c_str();
	std::wstring winputText = inputText.c_str();

	// Crear una instancia de la clase CVigenere con la clave
	CVigenere cipher(wkey);

	// Encriptar el texto
	std::wstring encryptedWText = cipher.encrypt(winputText);

	// Convertir std::wstring a UnicodeString
   UnicodeString encryptedText = encryptedWText.c_str();

	// Mostrar el texto encriptado en MemoOutput
	MemoOutput->Lines->Text=encryptedText;



}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button4Click(TObject *Sender)
{

   // Usar UnicodeString para trabajar con los componentes de VCL
	UnicodeString key = MemoClave->Text;
	UnicodeString encryptedText = MemoInput->Lines->Text;

	// Convertir UnicodeString a std::wstring
	std::wstring wkey = key.c_str();
	std::wstring wencryptedText = encryptedText.c_str();

	// Crear una instancia de la clase CVigenere con la clave
	CVigenere cipher(wkey);

	// Desencriptar el texto
	std::wstring decryptedWText = cipher.decrypt(wencryptedText);

	// Convertir std::wstring a UnicodeString
	UnicodeString decryptedText=decryptedWText.c_str();

	// Mostrar el texto desencriptado en MemoOutput
	MemoOutput->Lines->Text=decryptedText;

}
//---------------------------------------------------------------------------



void __fastcall TForm2::Button1Click(TObject *Sender)
{
	/*
	UnicodeString key = MemoClave->Text;
	UnicodeString inputText = MemoInput->Lines->Text;

	std::wstring wkey = key.c_str();
	std::wstring winputText = inputText.c_str();

	// Crear una instancia de la clase CVigenere con la clave
	CVigenere cipher(wkey);

	// Encriptar el texto
	std::wstring encryptedWText = cipher.encrypt(winputText);

	// Convertir std::wstring a UnicodeString
   UnicodeString encryptedText = encryptedWText.c_str();

	MemoOutput->Lines->Text=encryptedText;
	*/

}
//---------------------------------------------------------------------------



