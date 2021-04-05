//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TEdit *Txt_Res;
	TButton *Btn_7;
	TButton *Btn_8;
	TButton *Btn_1;
	TButton *Btn_5;
	TButton *Btn_6;
	TButton *Btn_4;
	TButton *Btn_9;
	TButton *Btn_3;
	TButton *Btn_2;
	TButton *Btn_point;
	TButton *Btn_Igual;
	TButton *Btn_0;
	TButton *Btn_Suma;
	TButton *Btn_Division;
	TButton *Btn_Multiplicacion;
	TButton *Btn_Resta;
	TButton *Btn_Apagar;
	TButton *Btn_Raiz;
	void __fastcall Btn_1Click(TObject *Sender);
	void __fastcall Btn_2Click(TObject *Sender);
	void __fastcall Btn_3Click(TObject *Sender);
	void __fastcall Btn_4Click(TObject *Sender);
	void __fastcall Btn_5Click(TObject *Sender);
	void __fastcall Btn_6Click(TObject *Sender);
	void __fastcall Btn_7Click(TObject *Sender);
	void __fastcall Btn_8Click(TObject *Sender);
	void __fastcall Btn_9Click(TObject *Sender);
	void __fastcall Btn_0Click(TObject *Sender);
	void __fastcall Btn_ApagarClick(TObject *Sender);
	void __fastcall Btn_RaizClick(TObject *Sender);
	void __fastcall Btn_SumaClick(TObject *Sender);
	void __fastcall Btn_DivisionClick(TObject *Sender);
	void __fastcall Btn_MultiplicacionClick(TObject *Sender);
	void __fastcall Btn_RestaClick(TObject *Sender);
	void __fastcall Btn_IgualClick(TObject *Sender);
	void __fastcall Btn_pointClick(TObject *Sender);
private:	// User declarations

public:		// User declarations
	double n1,n2,n3;
	char suma,div,resta,multi;
	bool igual;
	char punto;

	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
