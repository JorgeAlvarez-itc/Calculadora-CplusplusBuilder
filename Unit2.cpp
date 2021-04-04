//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
bool dot;
int op;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
	dot = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Btn_1Click(TObject *Sender)
{
	Screen->Text = Screen->Text + "1";
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Btn_2Click(TObject *Sender)
{
	Screen->Text = Screen->Text + "2";
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Btn_3Click(TObject *Sender)
{
    Screen->Text = Screen->Text + "3";
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Btn_4Click(TObject *Sender)
{
    Screen->Text = Screen->Text + "4";
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Btn_5Click(TObject *Sender)
{
    Screen->Text = Screen->Text + "5";
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Btn_6Click(TObject *Sender)
{
    Screen->Text = Screen->Text + "6";
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Btn_7Click(TObject *Sender)
{
	Screen->Text = Screen->Text + "7";
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Btn_8Click(TObject *Sender)
{
    Screen->Text = Screen->Text + "8";
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Btn_9Click(TObject *Sender)
{
    Screen->Text = Screen->Text + "9";
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Btn_0Click(TObject *Sender)
{
	Screen->Text = Screen->Text + "0";
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Btn_dotClick(TObject *Sender)
{
	if(dot)
	{
		if(Screen->Text == "")
		{
			Screen->Text = Screen->Text + "0.";
		}
		else
		{
			Screen->Text = Screen->Text + ".";
		}
		dot = false;
	}
}
//---------------------------------------------------------------------------

