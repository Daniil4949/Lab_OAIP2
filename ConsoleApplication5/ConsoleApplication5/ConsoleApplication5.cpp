﻿// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstdio>
#include <ctime>
using namespace std;

int main()
{
	system("chcp 1251>nul");
	srand(time(NULL));
	const int N = 100;
	int n, k, z, a[N];
	k = 0;
	cout << "Введите количество элементов массива: " << endl;
	cin >> n;
	cout << "Вы будете вводить элементы массива в консоль,то нажните 1. Если  хотите случайную последовательность чисел, то нажмите 2     " << endl;
	cin >> z;
	if (z == 1) {
		do {
			cin >> a[k];
			k++;

		} while (k < n);
	}
	else {
		for (int i = 0; i < n;i++) {
			a[i] = rand()%100;
			cout << a[i] << " ";
		}
	}
	int rez=1, i = 0;
	for (i = 0; i < n; i++) {
		if (a[i] == 0) {
			break;
		}
	}

	for (++i; i < n; i++) {
		if (a[i] == 0) {
			break;
		}
		
		rez *= a[i];

	}
	if (a[i] != 0) {
		rez = 0;
		cout << endl;
	}
		
	
	cout << "Результат: " << rez << endl;


	system("pause");
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
