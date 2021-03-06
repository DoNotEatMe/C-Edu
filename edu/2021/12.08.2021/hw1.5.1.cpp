#include <iostream>

using namespace std;

int main()
{

    int arr[100];
    long long int x, n, tmp, mem, count;

    cin >> x; //получаем пользовательское значение

    tmp = 0;   //количество разрядов вводимого числа
    mem = x;   //переменная для расчетов количества разрядов
    count = 0; //переменная подсчета успешных сверок

    //считаем количество символов для дальнейшего цикла записи в массив
    while (mem >= 1)
    {
        mem /= 10;
        tmp++;
    };

    // cout << "tmp: " << tmp << endl;  //проверяем количество разрядов

    //Запускаем цикл записи числа в массив
    for (int i = 0; i < tmp; i++)
    {
        n = x % 10; //находим самое правое число
        x /= 10; 
        arr[i] = n;  //записываем полученное число в массив
        // cout << arr[i]  << "i: " << i << endl; //проверяем правильность записи в массив
    }

    for (int i = 0; i < tmp / 2; i++)
    {
        if (arr[i] != arr[tmp - 1 - i])
        {
            cout << "Number is NOT a palindrome";
            break;
        }
        else
            count++;
    }

    if (count == tmp / 2)
        cout << "Great! Looks like a polindrome.";
}