#include <iostream>
#include <cmath>

using namespace std;

// Задача 1.2 : Пользователь вводит размер массива n и вводит значения. Требуется
// найти индекс максимального и минимального элементов

int main()
{
    int arr[100];
    int x(0), y(0), min(INT_MAX), max(INT_MIN), maxInd(0), minInd(0);

    cout << "Insert array lenght: ";
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
        if (arr[i] < min)
        {
            min = arr[i];
            minInd = i;
        }
    }

    cout << "Lowest number is: " << min << " index is: " << minInd << endl;
    cout << "Largest number is: " << max << " index is: " << maxInd << endl;
}
