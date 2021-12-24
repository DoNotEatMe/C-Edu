#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;
// Задача 3 : Найдите индексы максимального и минимального эл-та в одномерном
// динамическом массиве.

void arrayMinMax(const int *n, int *arr, int *arrMax, int *arrMin);

int main()
{
    int n(0), arrMax(INT_MIN), arrMin(INT_MAX);

    srand(time(0));
    n = 3 + rand() % 10;
    // cout << "Insert array lenght: ";
    // cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    arrayMinMax(&n, arr, &arrMax, &arrMin);
    delete arr;
}

void arrayMinMax(const int *n, int *arr, int *arrMax, int *arrMin)
{

    for (int i = 0; i < *n; i++)
    {

        arr[i] > *arrMax ? *arrMax = arr[i] : 0;
        arr[i] < *arrMin ? *arrMin = arr[i] : 0;
    }

    cout << endl
         << "arrmax: " << *arrMax << " arrmin: " << *arrMin;
}