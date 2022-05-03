#include<iostream>

using namespace std;

int f(int a[], int n)
{
    
    int pos = 0, neg = 0, null = 0;

    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 21 - 10;
        if (a[i] > 0) pos++;
        else if (a[i] < 0) neg++;
        else null++;
        cout << a[i] << " ";
    }
    cout << "\nпозетивные=" << pos << "  негативные=" << neg << "  нули=" << null << "\n";
    return a[n];
}

int main()
{
    srand(time(0));
    setlocale(0,"");
    int n = 9;
    cout << " введите размер масива";
    cin >> n;
    int* a = new int[n];
    int pos = 0, neg = 0, null = 0;

    f(a, n);
    
   
}


