#include <iostream>
#include <cmath>
#include <string>
#include <ctime>

using namespace std;

// Задача 1 Найти корни квадратного уравнения. Пользователь вводит
// коэффициенты a , b, c функция выводит результат решения уравнени

//и (Передаем
//по ссылке/ константной ссылке значения в ф-ию)

// квадратное уровнение - a*pow(x,2) + b*x + c = 0
// для вычисление корней необходимо расчитать дискриминант по формуле pow(b, 2) - 4 * a * c
// после этого необходимо вычислить корни по формуле ((b * -1) +- sqrt(дискриминант)) / (2 * a)

// тест кейс1 a == 3, b == -14, c == -5
// базовый кейс, который должен работать всегда
// тест кейс2 a == 0, b == 7, c == 14
// кейс, в котором a == 0, соответственно a*pow(x,2) == 0. Кейс преобразует квадратное вравнение в линейное b*x+c = 0. Расчитать его на много проше, по этому не заносим его в исключения.
// тест кейс3 a == -1, b == 3, c == 0
// кейс, в котором, при использовании float для вычесления первого корня (плюсового), выдает нам значение "-0", что не корретно.
// к сожалению, не придумал оригинального решения проблемы, кроме замены типа возвращения с float на int.
// тест кейс4 a == 0, b == 0, c == 14
// тест кейс в котором нет решения, т.к. a*pow(x,2) == 0 && x*b == 0. Т.е. мы не можем определить х ни при каких обстоятельсвах.
// тест кейс5 a == 2, b == 0, c == 14
// тест кейс в котором дискриминант становится отрицательным, что говорит о том, что решения нет.

// объявление функций
void count(int *a, int *b, int *c, int *d, int *x1, int *x2);      //функция вычислаения квадратного уравнения
void more(int *a, int *b, int *c, int *d, int *x1, int *x2);       //цикл вычислений квадратного уравнения с рандомными значениями
void dfunc(int *a, int *b, int *c, int *d);           // дискриминант
void xPositive(int *a, int *b, int *d, int *x1);   // корень 1
                                      // если задаем для х1 float, то в 3 кейсе, (-1, 3, 0), на выходе будем получать -0. Фиксится функцией возвращающей int, но, кажется. это не верно.
void xNegative(int *a, int *b, int *d, int *x2); // корень 2
float aZero(int *b, int *c);            // если a == 0, решение линейного уравнения.
void read( int *a, int *b, int *c);

int main()
{
    int a(0), b(0), c(0), d(0), x1(0), x2(0); // объявление переменных
     
    srand(time(0));
    read(&a, &b,&c);
   

    count(&a, &b, &c, &d, &x1, &x2); // Функция вычисления дискриминанта по введенным данным
    more(&a, &b, &c, &d, &x1, &x2);  // Функция вычисления дискриминанта с рандомными данными
}
void read(int *a, int *b, int *c){
 cout << "Insert a,b,c: ";

    cin >> *a >> *b >> *c; // ввод переменных
}

void dfunc(int *a, int *b, int *c, int *d)
{
    
    *d = pow(*b, 2) - 4 * *a * *c;
    
}

void xPositive(int *a, int *b, int *d, int *x1)
{
    
    *x1 = ((*b * -1) + sqrt(*d)) / (2 * *a);
    
}

void xNegative(int *a, int *b, int *d, int *x2)
{
    
    *x2 = ((*b * -1) - sqrt(*d)) / (2 * *a);
  
}

float aZero(int *b, int *c)
{
    float zero;
    zero = (0 - *c) / *b;
    return zero;
    
    
}

void count(int *a, int *b, int *c, int *d, int *x1, int *x2)
{
    
    if (*a != 0 && *b != 0) // если a&&b != 0, считаем дискриминант
    {
        dfunc(a, b, c, d); // вызов функции дискриминанта

        if (*d < 0) // если дискриминант < 0, прерываем выоленения программы.
        {
            cout << "No answer desc < 0";
            return;
        }
        cout << endl;
        xPositive(a, b, d, x1);
        cout << "X1 = " << *x1;
        cout << endl;
        xNegative(a, b, d, x2);
        cout << "X2 = " << *x2;
        cout << endl;
    }
    else if (*a == 0 && *b == 0 || *b == 0) // Если a&&b == 0 || b == 0, у уравнения нет корней
    {
        cout << endl;
        cout << "No answer a == 0 && b == 0 || b == 0";
    }
    else if (*a == 0) // если a == 0, вычисляем линейное уравнение
    {
        cout << endl;
        cout << "X = " << aZero(b, c);
        
    }
}

void more(int *a, int *b, int *c, int *d, int *x1, int *x2)
{
    string yn;

    cout << endl
         << endl
         << "More random cases? y/n" << endl;

    cin >> yn;

        while (yn == "y")
        {
            cout << endl
                 << endl;
            *a = -100 + rand() % 200;
            *b = -100 + rand() % 200;
            *c = -100 + rand() % 200;
            cout << "a: " << *a << endl
                 << "b: " << *b << endl
                 << "c: " << *c << endl;
            count(a, b, c, d, x1, x2);
            cout << endl
                 << endl
                 << "More? y/n" << endl;
            cin >> yn;
            cout << endl;
        }

        if (yn == "n")
        {
            cout << endl;
            cout << "Thanks for your attention" << endl;
            return;
        }

}