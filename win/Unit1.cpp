//---------------------------------------------------------------------------
#include<math.h>
#include<iostream>
#include<conio.h>
#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button1Click(TObject *Sender)
{    double a, b ,e, rez, x,y,z;
     x = StrToFloat(Edit1->Text);
     y = StrToFloat(Edit2->Text);
     z = StrToFloat(Edit3->Text);


     a = log(pow(y,-sqrt(fabs(x))));
     e = x-y/2;
     b = sin(atan(z))*sin(atan(z));
     rez= a*e+b;
     
     Memo1->Lines->Add("при х= = "+FloatToStrF(x,ffFixed,7,3)
         + "; y = "+FloatToStrF(y,ffFixed,7,3)+"; z = "+FloatToStrF(z,ffFixed,7,3));
     Memo1->Lines->Add("Результат = "+FloatToStr(rez));


}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
   
Edit1->Text = "-15,246";
   Edit2->Text = "4,642e-2";
   Edit3->Text = "20,001e2";
   Memo1->Clear();
   Memo1->Lines->Add("Лабораторная работа № 1");
}
//---------------------------------------------------------------------------

