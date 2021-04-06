//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Methods.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
bool dot;
bool startT;
int op;
std::deque<double> operandos;

//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
	dot = true;
	startT = true;
	op = 0;
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Btn_1Click(TObject *Sender)
{
	if(startT)
	{
		Screen->Text = "1";
		startT = false;
	}
	else
	{
		Screen->Text = Screen->Text + "1";
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Btn_2Click(TObject *Sender)
{
	if(startT)
	{
		Screen->Text = "2";
		startT = false;
	}
	else
	{
		Screen->Text = Screen->Text + "2";
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Btn_3Click(TObject *Sender)
{
	if(startT)
	{
		Screen->Text = "3";
		startT = false;
	}
	else
	{
		Screen->Text = Screen->Text + "3";
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Btn_4Click(TObject *Sender)
{
	if(startT)
	{
		Screen->Text = "4";
		startT = false;
	}
	else
	{
		Screen->Text = Screen->Text + "4";
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Btn_5Click(TObject *Sender)
{
	if(startT)
	{
		Screen->Text = "5";
		startT = false;
	}
	else
	{
		Screen->Text = Screen->Text + "5";
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Btn_6Click(TObject *Sender)
{
	if(startT)
	{
		Screen->Text = "6";
		startT = false;
	}
	else
	{
		Screen->Text = Screen->Text + "6";
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Btn_7Click(TObject *Sender)
{
	if(startT)
	{
		Screen->Text = "7";
		startT = false;
	}
	else
	{
		Screen->Text = Screen->Text + "7";
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Btn_8Click(TObject *Sender)
{
	if(startT)
	{
		Screen->Text = "8";
		startT = false;
	}
	else
	{
		Screen->Text = Screen->Text + "8";
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Btn_9Click(TObject *Sender)
{
	if(startT)
	{
		Screen->Text = "9";
		startT = false;
	}
	else
	{
		Screen->Text = Screen->Text + "9";
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Btn_0Click(TObject *Sender)
{
	if(startT)
	{
		Screen->Text = "0";
		startT = false;
	}
	else
	{
		Screen->Text = Screen->Text + "0";
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Btn_dotClick(TObject *Sender)
{
	if(dot)
	{
		if(Screen->Text == "" || startT)
		{
			Screen->Text =  "0.";
		}
		else
		{
			Screen->Text = Screen->Text + ".";
		}
		dot = false;
		startT = false;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Btn_addClick(TObject *Sender)
{
	op = 1;
	if(operandos.size() >= 1)
	{
		operandos.push_back(Screen->Text.ToDouble());

		Double aux = equals(operandos,op);
		Screen->Text = UnicodeString(aux);
		restartText();
		restartOps();
		operandos.push_back(Screen->Text.ToDouble());
	}
	else
	{
		operandos.push_back(Screen->Text.ToDouble());
	}
	restartText();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Btn_minusClick(TObject *Sender)
{
	op = 2;
    if(operandos.size() >= 1)
	{
		operandos.push_back(Screen->Text.ToDouble());

		Double aux = equals(operandos,op);
		Screen->Text = UnicodeString(aux);
		restartText();
		restartOps();
		operandos.push_back(Screen->Text.ToDouble());
	}
	else
	{
		operandos.push_back(Screen->Text.ToDouble());
	}
	restartText();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Btn_multClick(TObject *Sender)
{
	op = 3;
    if(operandos.size() >= 1)
	{
		operandos.push_back(Screen->Text.ToDouble());

		Double aux = equals(operandos,op);
		Screen->Text = UnicodeString(aux);
		restartText();
		restartOps();
		operandos.push_back(Screen->Text.ToDouble());
	}
	else
	{
		operandos.push_back(Screen->Text.ToDouble());
	}

	restartText();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Btn_divClick(TObject *Sender)
{
	op = 4;
    if(operandos.size() >= 1)
	{
		operandos.push_back(Screen->Text.ToDouble());

		Double aux = equals(operandos,op);
		Screen->Text = UnicodeString(aux);
		restartText();
		restartOps();
		operandos.push_back(Screen->Text.ToDouble());
	}
	else
	{
		operandos.push_back(Screen->Text.ToDouble());
	}
	restartText();
}
//---------------------------------------------------------------------------


void __fastcall TForm2::Btn_clsClick(TObject *Sender)
{
	restartText();
	restartOps();
	Screen->Text = "0";
}
//---------------------------------------------------------------------------


void __fastcall TForm2::Btn_delClick(TObject *Sender)
{
	Screen->Text = Screen->Text.Delete(Screen->Text.Length(),1);
	std::wstring s = Screen->Text.c_str();
	dot = checkDot(s);
	if(Screen->Text != "")
	{
		startT = false;
    }
}

void __fastcall TForm2::Btn_equalsClick(TObject *Sender)
{
	operandos.push_back(Screen->Text.ToDouble());
	if(operandos.size() < 2)
	{
		operandos.push_back(0);
	}

	Double aux = equals(operandos,op);
	Screen->Text = UnicodeString(aux);

	restartText();
	restartOps();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Btn_percentClick(TObject *Sender)
{
	operandos.push_back(Screen->Text.ToDouble());
	if(operandos.size() < 2)
	{
		operandos.push_back(0);
	}

	Double aux = percentage(operandos,op);
	Screen->Text = UnicodeString(aux);

	restartText();
	restartOps();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Btn_sqrtClick(TObject *Sender)
{
	 Double aux = sqRoot(Screen->Text.ToDouble());
	 Screen->Text = UnicodeString(aux);
	 restartText();
}
//---------------------------------------------------------------------------

void restartText()
{
	dot = true;
	startT = true;
}

void restartOps()
{
	op = 0;
	operandos.clear();
}

