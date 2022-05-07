#include<iostream>

using namespace std;

int add_blok(int *arr, int* size1, int* size2, int* size3, int f)
{
	f = *size1;
	cin >> *size2;
	size3 = new int(*size1 + *size2);
	for (int i = f; i < *size3; i++)
	{
		arr[i] = rand() % 50;
	}
	for (int i = 0; i < *size3; i++)
	{

		cout << " " << arr[i];
	}
	return *size3;
}

int main()
{
	setlocale(0, "");

	int* size1 = new int (5);
	cin >> *size1;
	int f = *size1;
	int* size2 = new int(5);
	int* size3 = new int(5);
	int* arr  = new int[*size1];
	for (int i = 0; i < *size1; i++)
	{
		arr[i] = rand() % 50;
		cout << " " << arr[i];
	}
	cout << endl;
	
	add_blok(arr, size1, size2, size3,f);

	exit(0);
}