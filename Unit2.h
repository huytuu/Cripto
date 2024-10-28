//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TPageControl *Main;
	TTabSheet *Cesar;
	TTabSheet *Vigenere;
	TTabSheet *TabSheet3;
	TButton *Button1;
	TButton *Button2;
	TLabel *Label1;
	TLabel *Label2;
	TButton *Button3;
	TButton *Button4;
	TLabel *Label3;
	TLabel *Label4;
	TButton *Button5;
	TButton *Button6;
	TLabel *Label5;
	TLabel *Label6;
	TMemo *Memo1;
	TMemo *Memo2;
	TMemo *MemoInput;
	TMemo *MemoOutput;
	TMemo *Memo5;
	TMemo *Memo6;
	TMemo *MemoClave;
	TImage *Image1;
	TLabel *Label7;
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);



private:	// User declarations
public:		// User declarations
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
