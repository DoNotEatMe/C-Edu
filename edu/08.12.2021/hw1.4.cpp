#include <iostream>

using namespace std;

// Задача 1.1 : Пользователь вводит целое положительное число не больше 100; Нарисуйте такой прямоугольник

int main()
{
    int x, n, count, arr[100];
    cin >> x;

    cout << endl;

    // И
    for (int i = 0; i < x; i++)
    {

        for (int j = 0; j < x; j++)
        {
            if (j == 0 || j == x - 1 || i + j == x - 1)
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

    cout << endl
         << endl;

    // П
    for (int i = 0; i < x; i++)
    {

        for (int j = 0; j < x; j++)
        {
            if (j == 0 || j == x - 1 || i == 0)
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

    cout << endl
         << endl;

    // X
    for (int i = 0; i < x; i++)
    {

        for (int j = 0; j < x; j++)
        {
            if (i == j || i + j == x - 1)
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

    cout << endl
         << endl;

    // !
    for (int i = 0; i < x; i++)
    {

        for (int j = 0; j < x; j++)
        {
            if (j == x / 2 && i != x - 2)
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

    cout << endl
         << endl;

    // Ш
    for (int i = 0; i < x; i++)
    {

        for (int j = 0; j < x; j++)
        {
            if (j == x / 2 || (j == x - 1 && i != x - 1) || (j == 0 && i != x - 1) || i == x - 2)
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

    cout << endl
         << endl;

    // Щ
    for (int i = 0; i < x; i++)
    {

        for (int j = 0; j < x; j++)
        {
            if ((j == x / 2 && i != x - 1) || j == x - 1 || (j == 0 && i != x - 1) || i == x - 2)
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