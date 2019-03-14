#include <iostream>
#include <Windows.h>
#include <fstream>

using namespace std;

void add_line(int **&p, int &n, int m) {
	int** tmp;
	tmp = new int*[n + 1];
	for (int i = n; i >= 0; i--)
	{
		tmp[i] = p[i];
	}
	tmp[n] = new int[m];

	for (int i = m; i >= 0; i--)
	{
		tmp[n][i] = 0;
	}

	delete[] p;
	p = tmp;
	n++;
}

void fill_matrix(int** pp, int n, int m) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			pp[i][j] = rand() % 20;
		}
	
	}
}
void print_matrix(int** pp, int n, int m) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << pp[i][j] << " ";
		}
		cout << endl;
	}
}
void add_t_k_pos(int **&p, int &n, int m, int k) {
	int** tmp = new int*[n + 1];
	for (int i = 0; i < k; i++)
	{
		tmp[i]=
	}
}


int main()
{
	/*int *p, **pp;
	p = new int[5]; // одинарный массив в одинарный указатель
	pp = new int*[5]; //двумерный массив ток в двойной указатель

	for (int i = 0; i < 5; i++)
	{
		pp[i] = new int[i+1];
	}

	for (int i = 0; i < 5; i++)
	{
		delete[] pp[i]; //удаление одномерного массива
		delete[] pp;   //удаление указателя 
	}*/

	//1.	Создать функцию, вставляющую строку в двумерный динамический массив в указанную позицию.
	/*int **ar;
	int n, m;
	cin >> n >> m;
	ar = new int*[n];
	for (int i = 0; i < n; i++)
		ar[i] = new int[m];

	fill_matrix(ar, n, m);
	print_matrix(ar, n, m);
	add_line(ar, n, m);
	cout << "Matrix after modification" << endl;
	print_matrix(ar, n, m);*/




	system("pause");
}