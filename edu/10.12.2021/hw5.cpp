#include <iostream>
#include <cmath>

// Задача 1.5 : Пользователь вводит размер массива n и вводит значения. Затем
// пользователь вводит размер второго массива и вводит в него значения. Вставьте
// значения из массива 2 на позицию индекса k первого.

using namespace std;

int main()
{
    int arr[100], arr2[100], arr3[100];
    int x(0), y(0), m(0), n(0), k(0), ind(0), buff(0);

    cout << "Insert first array lenght: ";
    cin >> x;

    cout << "Insert first array numbers: ";
    for (int i = 0; i < x; i++)
    {

        cin >> y;
        arr[i] = y;
    }

    cout << "Insert second array lenght: ";
    cin >> m;

    cout << "Insert second array numbers: ";
    for (int i = 0; i < m; i++)
    {

        cin >> n;
        arr2[i] = n;
    }

    cout << "Insert k-index to past: ";
    cin >> k;

    for (int i = 0; i < m; i++)
    {
        arr3[i] = arr[k + i];     // загоняем в 3 массив все что нужно подвинуть
        arr[k + i] = arr2[i];     // загоняем в освоодившиеся места новые значения
        arr[k + m + i] = arr3[i]; // добавляем сохраненные подвинутые значения
    }

    x += m;
    for (int i = 0; i < x; i++)
    {
        cout << arr[i] << " ";
    }
}