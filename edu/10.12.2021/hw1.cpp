#include <iostream>

using namespace std;

// Задача 1.1 : Пользователь вводит размер массива n и вводит значения. Требуется
// найти максимальный и минимальный элементы.

int main()
{
    int arr[100];
    int x(0), y(0), min(INT8_MAX), max(INT_MIN);

    cout << "Insert array lenght: ";
    cin >> x;

    for (int i = 0; i < x; i++)
    {
        cout << "insert number: ";
        cin >> y;
        arr[i] = y;

        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    };

    cout << "Lowest number is: " << min << endl;
    cout << "Largest number is: " << max << endl;
}