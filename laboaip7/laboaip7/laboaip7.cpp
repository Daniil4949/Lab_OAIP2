﻿// laboaip7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;
int main() {
    system("chcp 1251>nul");
    char st[100];
    cout << "Введите строку, содержащую группу нулей и единиц: " << endl;
    cin.getline(st, 100);
    int s = 0;
    int t = 0;
    int n = 0;
    int i = 0;
    int l = strlen(st);
    st[l] = ' ';
    for (int i = 0; i <= l; i++) {

        if (st[i] != ' ') {
            n++;
            if (st[i] == '1') {
                t++;
            }
        }
        else
        {
            if (n % 2 != 0) {
                s += t;
            }
            n = 0;
            t = 0;



        }
        
    }
    cout <<"Количество единиц в группах с нечетным количеством символов: "<< s << endl;
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
