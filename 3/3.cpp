#include <iostream> 
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	const int n = 3;
	int A[n][n];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			A[i][j] = rand() % 10;
			std::cout << A[i][j] << " ";
		}
		std::cout << std::endl;
	}
	int sum = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (i == j)
				sum += A[i][i];
	std::cout << "Сумма элементов главной диагонали = " << sum << std::endl;
	system("pause>>null");
	return 0;
}