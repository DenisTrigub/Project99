#include<iostream>

using namespace std;

int func(int arr[], int* size)
{
	int min, nul, max;
	for (int i = 0; i < *size; i++)
	{
		arr = new int[i];
		arr[i] = -10 + rand() % 50;
	    cout << " " << arr[i];
		cout << endl;

		if (arr[i] < 0)
		{
			min == arr[i];
		}
		cout << endl;
		if (arr[i] == 0)
		{
			nul = arr[i];
		}
		cout << endl;
		if (arr[i] > 0)
		{
			max = arr[i];
		}
		
	}
	cout << "������ 0 " << min << " ����� 0 " << nul << "������ 0 " << max;
	return *arr;
}
int main()
{
	srand(time(0));
	setlocale(0,"");
	int* size = new int(6);
	int* arr = new int [*size];
	cout << "������� ������ �������: ";
	cin >> *size;
	func(arr, size);

}