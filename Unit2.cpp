//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
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

void __fastcall TForm2::Btn_1Click(TObject *Sender)
{
	Txt_Res->Text =  Txt_Res->Text + "1";
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Btn_2Click(TObject *Sender)
{
	Txt_Res->Text =  Txt_Res->Text + "2";
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Btn_3Click(TObject *Sender)
{
Txt_Res->Text =  Txt_Res->Text + "3";
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Btn_4Click(TObject *Sender)
{
Txt_Res->Text =  Txt_Res->Text + "4";
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Btn_5Click(TObject *Sender)
{
Txt_Res->Text =  Txt_Res->Text + "5";
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Btn_6Click(TObject *Sender)
{
Txt_Res->Text =  Txt_Res->Text + "6";
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Btn_7Click(TObject *Sender)
{
Txt_Res->Text =  Txt_Res->Text + "7";
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Btn_8Click(TObject *Sender)
{
Txt_Res->Text =  Txt_Res->Text + "8";
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Btn_9Click(TObject *Sender)
{
Txt_Res->Text =  Txt_Res->Text + "9";
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Btn_0Click(TObject *Sender)
{
Txt_Res->Text =  Txt_Res->Text + "0";
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Btn_ApagarClick(TObject *Sender)
{
Txt_Res->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Btn_RaizClick(TObject *Sender)
{
 float raiz,rsaida;
 raiz = StrToFloat(Txt_Res->Text);
 rsaida = sqrt(raiz);
 Txt_Res->Text=rsaida;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Btn_SumaClick(TObject *Sender)
{
	 if(suma==true) {
		 n1=Txt_Res->Text.ToDouble();
		 n3= n1+n2;
		 Txt_Res->Text="";
	 }
	 else
	 {
		 n2=Txt_Res->Text.ToDouble();
		 Txt_Res->Clear();
		 div = false;
		 suma=true;
		 multi=false;
		 resta=false;
	 }
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Btn_DivisionClick(TObject *Sender)
{
		if(div==true) {
		 n1=Txt_Res->Text.ToDouble();
		 n3= n1/n2;
		 Txt_Res->Text="";
	 }
	 else
	 {
		 n2=Txt_Res->Text.ToDouble();
		 Txt_Res->Clear();
		 div = true;
		 suma=false;
		 multi=false;
		 resta=false;
	 }
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Btn_MultiplicacionClick(TObject *Sender)
{
		if(multi==true) {
		 n1=Txt_Res->Text.ToDouble();
		 n3= n1*n2;
		 Txt_Res->Text="";
	 }
	 else
	 {
		 n2=Txt_Res->Text.ToDouble();
		 Txt_Res->Clear();
		 div = false;
		 suma=false;
		 multi=true;
		 resta=false;
	 }
}

//---------------------------------------------------------------------------

void __fastcall TForm2::Btn_RestaClick(TObject *Sender)
{
	 if(resta==true) {
		 n1=Txt_Res->Text.ToDouble();
		 n3= n1-n2;
		 Txt_Res->Text="";
	 }
	 else
	 {
		 n2=Txt_Res->Text.ToDouble();
		 Txt_Res->Clear();
		 div = false;
		 suma=false;
		 multi=false;
		 resta=true;
	 }
}

//---------------------------------------------------------------------------

void __fastcall TForm2::Btn_IgualClick(TObject *Sender)
{
if(suma==true){
	n2= Txt_Res->Text.ToDouble();
	n3 = n1+n2;
	Txt_Res->Text=n3;
	igual=false;
}

if(resta==true){
	n2= Txt_Res->Text.ToDouble();
	n3 = n1-n2;
	Txt_Res->Text=n3;
	igual=false;
}

if(multi==true){
	n2= Txt_Res->Text.ToDouble();
	n3 = n1*n2;
	Txt_Res->Text=n3;
	igual=false;
}

if(div==true){
	n2= Txt_Res->Text.ToDouble();
	n3 = n1/n2;
	Txt_Res->Text=n3;
	igual=false;
}


}

//---------------------------------------------------------------------------


void __fastcall TForm2::Btn_pointClick(TObject *Sender)
{
Txt_Res->Text=Txt_Res->Text+".";
}
//---------------------------------------------------------------------------



