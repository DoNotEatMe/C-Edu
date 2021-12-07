#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x, y;    // вводим пользовательские переменные.
    bool result; // задаем булевый результат

    // пользователь вводит переменные
    cout << "Insetr X: ";
    cin >> x;
    cout << "Insert Y: ";
    cin >> y;

    // расчет 1/0 результата. Не могу сделать сразу cout << (..)?.:.; почему-то
    result = (y <= 4 * x && pow(x, 2) + pow(y, 2) <= 9 && y >= 1 && x <= 1) ? true : false;

    // вывод результата
    if (result == true)
    {
        cout << "Allright";
    }
    else
    {
        cout << "Bad option";
    }
}