#include <iostream>
#include <cmath>

using namespace std;

// Задача 1.3 : Пользователь вводит размер массива n и вводит значения. Затем
// происходит ввод значения, на которое нужно заменить максимальное.

int main()
{
    int arr[100];
    int x(0), y(0), max(INT_MIN), maxInd(0), maxNew(0);

    cout << "insert array lenght: ";
    cin >> x;

    for (int i = 0; i < x; i++)
    {
        cout << "insert number: ";
        cin >> y;
        arr[i] = y;

        if (arr[i] > max)
        {
            max = arr[i];
            maxInd = i;
        }
    }

    cout << "Insert new max value: ";
    cin >> maxNew;

    arr[maxInd] = maxNew;

    for (int i = 0; i < x; i++)
    {
        cout << arr[i] << " ";
    }
}