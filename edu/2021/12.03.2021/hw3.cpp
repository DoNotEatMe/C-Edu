#include <iostream>

using namespace std;

// Задача 3: Пользователь вводит любое целое число , нужно вывести количество нечетных разрядов в числе.

int main()
{
    long int a, i; // определяем две переменные - пользовательскую и расчетную.
    i = 0;         //Обозначаем, что расчетная переменная обнуляется в начале программы

    cout << "insert number: ";
    cin >> a; // пользователь задает переменную

    while (a > 0)
    {                                  // пока значение пользовательской переменной больше нуля, выполняем цикл
        ((a % 10) % 2 != 0) ? i++ : i; // если разряд является нечетным, увеличиваем расчетную переменую, иначе расчетная переменная ¯\_(ツ)_/¯. Что можно выдать в false в таких случаях?
        a /= 10;                       // уменьшаем пользовательскую переменную на один разряд
    }

    cout << "there are " << i << " odd number rank(s)"; // выводим поличество разрядов
}