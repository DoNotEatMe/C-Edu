#include <iostream>
#include <cmath>

using namespace std;

// Задача 1.4 : Пользователь вводит размер массива n и вводит значения. Замените
// максимальный и минимальный эл-ты.

int main()
{
    int arr[100];
    int x(0), y(0), max(INT_MIN), min(INT_MAX), maxInd(0), minInd(0), buff(0);

    cout << "Insert array lenght: ";
    cin >> x;

    for (int i = 0; i < x; i++)
    {
        cout << "insert nubmer: ";
        cin >> y;
        arr[i] = y;

        if (arr[i] > max)
        {
            max = arr[i];
            maxInd = i;
        }

        if (arr[i] < min)
        {
            min = arr[i];
            minInd = i;
        }
    }

    cout << "Initial array: ";
    for (int i = 0; i < x; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    buff = arr[maxInd];
    arr[maxInd] = arr[minInd];
    arr[minInd] = buff;

    cout << "Result array: ";
    for (int i = 0; i < x; i++)
    {

        cout << arr[i] << " ";
    }
}