﻿using namespace std;
#include <iostream>
#include <ctime>
int main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 5, m = 5;
	srand(time(NULL));
	int a[n][m];
	for (int i = 0; i < n; ++i) 
	{ 
		for (int j = 0; j < m; ++j)
		{
			a[i][j] = rand() % 30;
			cout.width(3);
			cout  <<a[i][j]<< " ";
		}
		cout<< endl; 
	}
	int max = a[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];
			}
		}
	}
	cout<< "Наибольший элемент двумерного массива = " << max<< endl;
}