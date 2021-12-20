#include <iostream>

using namespace std;

// Задача 1.2 : Напишите функцию вывода одномерного и двумерного массива.

// Читается как - нам нужно просто вывести массив по заданым параметрам, а не работать с массивом после его формирования.
// Формирование массива в отдельной функции создает сложности с дальнейшей его обработкой, т.к. нужно работать с динамической памятью, чего мы пока не умеем.

void arrOne(int m, int arr[100]);
void arrTwo(int m, int n, int arr[100][100]);

int main()
{
    int arr[100][100];
    int m(0), n(0);

    cout << "Insert array lenght: ";
    cin >> m >> n;

    arrOne(m, arr[100]);

    cout << endl
         << endl;

    arrTwo(m, n, arr);

    cout << endl
         << endl;
}


void arrOne(int m, int arr[100])
{
    for (int i = 0; i < m; i++)
    {
        // cin >> arr[i];
        arr[i] = -34 + (rand() % static_cast<int>(100 - -34 + 1));
        cout << arr[i] << " ";
    }
    cout << endl;
}

void arrTwo(int m, int n, int arr[100][100])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // cin >> arr[i][j];
            arr[i][j] = -34 + (rand() % static_cast<int>(100 - -34 + 1));
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}