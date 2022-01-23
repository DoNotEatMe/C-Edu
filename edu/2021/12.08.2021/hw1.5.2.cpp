#include <iostream>
#include <cmath>

using namespace std;

// 2 Объявить массив на 100 значений, ввести количество животных (переменная).
// Считать вес животных (вещественное число). Работники зооприюта могут быть не
// знакомыми с компьютером и случайно поставить минус перед значением веса.
// Поэтому требуется хранить только положительные значения. Требуется ввести
// значения веса и вывести их на экран

int main()
{
    int x;
    float arr[100], y, count;
    count = 0;

    cout << "Insert number of pets: ";
    cin >> x;

    while (x <= 0)
    {
        cout << "Error: Insert positive number more than 0" << endl;
        cout << "Insert number of pets: ";
        cin >> x;
    }

    cout << endl;

    //Проблема. при вводе в x float мы пропускаем первый цикл for. В него попадает значение .n

    for (int i = 0; i < x; i++)
    {
        cout << "Insert weight " << i + 1 << ": ";
        cin >> y;

        //Если следовать формулировке задачи, то:
        y = fabs(y);
        // Иначе через while, как поступил с x

        // cout << endl;
        arr[i] = y;
        count += arr[i];
    }

    cout << endl
         << endl;

    for (int i = 0; i < x; i++)
    {
        cout << "weight " << i + 1 << ": " << arr[i] << endl;
    }
    cout << endl
         << "total weight: " << count;
}