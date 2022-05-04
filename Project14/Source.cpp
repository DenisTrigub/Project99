#include<iostream>

using namespace std;
#include<iostream>
using namespace std;
int* proverca(int* A, int* B, int size1, int size2)
{
    int* ptr;
    int i = 0;
    for (i = 0; i < size1; i++)
    {
        int j = i, k = 0;
        while (j < size1 && k < size2 && B[k] == A[j])
        {
            j++;
            k++;
        }

        if (k == size2)
            return ptr = A + i;
    }
    return 0; 
}
int main() {
    setlocale(LC_ALL, "rus");
    int size1, size2;
    cout << "Введите размер массива A: ";
    cin >> size1;
    int* A = new int[size1 + 1];
    cout << "Заполните массив: ";
    for (int i = 0; i < size1; i++)
        cin >> A[i];
    cout << "Введите размер массива B: ";
    cin >> size2;
    int* B = new int[size2];
    cout << "Заполните массив: ";
    for (int i = 0; i < size2; i++)
        cin >> B[i];


    cout << "Элемент должен стоять на позиции " << *proverca(A, B, size1, size2) << endl;


    return 0;
}