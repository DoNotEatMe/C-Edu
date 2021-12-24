#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;
// Задача 4 : Замените максимальный и минимальный эл-ты в одномерном
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

    cout << endl << "New array: "<< endl;
     for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void arrayMinMax(const int *n, int *arr, int *arrMax, int *arrMin)
{
    int buff, indMax, indMin;
    for (int i = 0; i < *n; i++)
    {
        if (arr[i] > *arrMax)
        {
            *arrMax = arr[i];
            indMax = i;
        }

        if (arr[i] < *arrMin)
        {
            *arrMin = arr[i];
            indMin = i;
        }
    }

    cout << endl
         << "arrmax: " << *arrMax << " arrmin: " << *arrMin;

    buff = *arrMax;
    arr[indMax] = *arrMin;
    arr[indMin] = *arrMax;
}