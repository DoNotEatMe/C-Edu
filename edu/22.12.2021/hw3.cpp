#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;
// Задача 3 : Найдите индексы максимального и минимального эл-та в одномерном
// динамическом массиве.

int arrayFormer(const int *n);
void arrayMinMax(const int *n, int *arr, int *arrMax, int *arrMin);

int main()
{
    int n(0), arr[1], arrMax(INT_MIN), arrMin(INT_MAX);
    srand(time(0));
    n = 3 + rand() % 10;
    // cout << "Insert array lenght: ";
    // cin >> n;
    arr[1] = arrayFormer(&n);
    // arrayMinMax(&n, &arr, &arrMax, &arrMin);
    cout << endl << arr[0];
}

int arrayFormer(const int *n)
{
    cout << *n << endl;

    int *arr = new int[*n];

    for (int i = 0; i < *n; i++)
    {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    return arr;
}

void arrayMinMax(const int *n, int *arr, int *arrMax, int *arrMin)
{
    cout << endl
         << *n << endl;
    for (int i = 0; i < *n; i++)
    {
        cout << i << " " << *n << " " << arr[i] << endl;
        // cout << arr[i] << " ";
        arr[i] > *arrMax ? arr[i] = *arrMax : *arrMax;
        arr[i] < *arrMin ? arr[i] = *arrMin : *arrMin;
    }

    cout << endl
         << "arrmax: " << *arrMax << " arrmin: " << *arrMin;
}