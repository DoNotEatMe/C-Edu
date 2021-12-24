#include <iostream>
#include <cmath>
#include <ctime>

// Задача 5 : Добавьте эл-т в конец одномерного динамического массива.
// Алгоритм будет следующим:
// 1) через указатель создаем первый дин массив
// 2) Заполняем его
// 3) Вводим значение, которое хотим вставить в конец
// 4) Создаем новый указатель на новый дин массив
// 5) Через цикл переносим все значения с одного массива в другой
// 6) Удаляем из кучи первый дин массив
// 7) Добавляем эл-т в новый дин массив
// 8) Выводим и чистим память

using namespace std;

int main()
{

    int n(0), x(0);
    srand(time(0));
    n = 3 + rand() % 10;
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "Insert number: ";
    cin >> x;
    cout << endl;

    int *arr2 = new int[n + 1];

    for (int i = 0; i < n + 1; i++)
    {
        arr2[i] = arr[i];
        if (i == n)
        {
            arr2[i] = x;
        }
        cout << arr2[i] << " ";
    }

    delete [] arr;
    delete [] arr2;

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        // arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
}