// ChyrunSofialab6.1.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Lab_06_1.cpp
// < Чирун Софія >
// Лабораторна робота № 6.1.2
// Пошук елементів одновимірного масиву рекурсивним способом   
// Варіант 18

#include <iostream>
#include <time.h>

using namespace std;

int Create(int* a, const int size, const int Low, const int High, int i)
{
    a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(a, size, Low, High, i + 1);
	return *a;
}

int Sum(int* mas, const int size, int s) 
{
	if (size == 0)
	{
		s += mas[size];
		return s;
	}
	else 
	{
		s += mas[size];
		Sum(mas, size - 1, s);
	}
}

int SumCriteria(int* mas, const int size) 
{
	if (size < 0)
		return 0;
	else
		if (mas[size] % 2 == 0 && (size + 1) % 7 != 0) 
		{
			int s = mas[size];
			mas[size] = 0;
			return s + SumCriteria(mas, size - 1);

		}
		else return SumCriteria(mas, size - 1);
}

int main()
{
	srand((unsigned)time(NULL)); 
	const int n = 26;
	int a[n];
	int Low = 3;
	int High = 92;
	Create(a, n, Low, High, 0);
	for (int i = 0; i < n; i++)
		cout << a[i] << "   ";
	    cout << endl << "Sall = " << Sum(a, n - 1, 0) << endl;
	    cout << endl << "Scriteria = " << SumCriteria(a, n - 1) << endl;
	for (int i = 0; i < n; i++)
		cout << a[i] << "   ";
    return 0;
}

