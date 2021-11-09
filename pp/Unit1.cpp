//---------------------------------------------------------------------------
#include <math.h>
#include <conio.h>
#include <iostream>
#include <vcl.h>
#pragma hdrstop

//---------------------------------------------------------------------------

#pragma argsused
int main(int argc, char* argv[])
{  double a, b ,e, rez, x= -15.246, y= 0.04642, z= 2000.1;

     a = log(pow(y,-sqrt(fabs(x))));
     e = x-y/2;
     b = sin(atan(z))*sin(atan(z));
     rez= a*e+b;
     cout<<"rez = "<<rez;
     getch();
        return 0;
}
//---------------------------------------------------------------------------
 