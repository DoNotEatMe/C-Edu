#include <iostream>

using namespace std;

// Задача 1.1 : Пользователь вводит целое положительное число не больше 100; Нарисуйте такой прямоугольник

int main()
{
    int x, n, count, arr[100];
    cin >> x;

    for (int i = 0; i < x; i++)
    {

        for (int j = 0; j < x; j++)
        {
            if (/*i == 0 || i == x - 1 ||*/ j == 0 || j == 1 || i == x / 2)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
}