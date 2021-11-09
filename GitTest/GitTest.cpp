// GitTest.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstdlib>
using namespace std;
double S(double, int);
double Y(double);
int factorial(int);
void Out_rez(double, int);
int factorial(int k)
{
    int s = 1;

    for (int i = 1; i <= k; i++)
    {
        s *= i;
    }

    return s;
}

double S(double x, int k) {
    return (cos(k * x))/(factorial(k));
}
double Y(double x) {
    return exp(cos(x)) * cos(sin(x));
}
void Out_rez(double a, int n) {
    double h = 0.1, b = 1.0;
    double y = 0, s = 0;
    for (double x = a; x <= b; x += h)
    {
        for (int k=0; k <= n; k++)
        {
            s += S(x, k);
             
        }
        y = Y(x); 
        cout<<" S(x)=" <<s <<" Y(x)=" << " " << y << " " <<" |S(x)-Y(x)|=" << abs(s - y) << endl;
        y = 0;
        s = 0;
    }
}

int main()
{
	system("chcp 1251>nul");
    Out_rez(0.1, 12);
	system("pause>nul");
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"
               
// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
