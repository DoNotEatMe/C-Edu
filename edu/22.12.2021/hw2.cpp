#include <iostream>
#include <cmath>

// Задача 2 : Найдите площадь круга по введенному радиусу. Напишите ф-ию,
// которая вводит значение. (Нерп типа)И функцию подсчета площади. (С возвр
// значением)

using namespace std;

void read(double *r);
double area(double *r);

int main()
{
    double r;
    
    read(&r);
    cout << " Area of circle is: " << endl;
    cout << area(&r);
}

void read(double *r)
{
    cout << "Please insert radius: ";
    cin >> *r;
}

double area(double *r)
{
    const double pi = 3.14;
    int result = pi * pow(*r, 2);
    return result;
}
