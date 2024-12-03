#include <iostream>

using namespace std;

int main()
{
	int rows;
	int cols;

	cout << "Enter the row number: ";
	cin >> rows;
	cout << "Enter the collum number: ";
	cin >> cols;

	int** matrix;
	matrix = new int*[rows];
	for (int i = 0; i < rows; i++)
	{
		matrix[i] = new int[cols];
	}

	cout << "Enter the elements of matrix: "<< endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << "Element [" << i << "][" << j << "]: ";
			cin >> matrix[i][j];
		}
	}
	cout << "Transpoze matrix: " << endl;
	for(int j = 0; j < cols; j++)
	{
		for (int i = 0; i < rows; i++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	for(int i = 0; i < rows; i++)
	{
		delete[] = matrix[i];
	}
	delete[] matrix;

	return 0;
}