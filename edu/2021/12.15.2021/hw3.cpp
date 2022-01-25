#include <iostream>

using namespace std;

//Задача 1.3 : Напишите ф-ию суммы для вещественных чисел.

float sum(float a, float b);

int main()
{
    float a, b;
    cin >> a >> b;
    cout << endl;
    cout << sum(a, b);
}

float sum(float a, float b)
{
    float result(0);
    result = a + b;
    cout << "Float sum: ";
    return result;
}