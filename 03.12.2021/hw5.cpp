#include <iostream>
#include <cmath>

using namespace std;

// Задача 5: Пользователь вводит любое целое число , нужно вывести true, если число палиндром
// Сломался на правильном определении правой части числа. Когда мы хотим все упростить через возведение в степень с разных сторон, нам необходимо, чтобы справа все начиналось с единицы.
// работает для чисел до 10 разрядов включительно.

int main()
{
    long int a, i, count, right, left, r, l, tmp, tmp2; // определяем переменные
    bool result;                                        // Определяем булеву переменную
    i = 0;                                              //Обозначаем, что расчетная переменная является нулём.

    cout << "insert number: ";
    cin >> a; // пользователь задает переменную

    count = a; //Присваеваем значение пользовательской переменной расчетной

    while (count > 0)
    {                // пока значение пользовательской переменной больше нуля, выполняем цикл
        i++;         // записываем в расчетную переменную +1 разряд
        count /= 10; // уменьшаем расчтеную переменную переменную на один разряд
    }

    //На этом этапе у нас есть количество разрядов введенного числа

    right = 1; // Определяем стартовое значение для возведения в степень правой стороны.
    r = 1;     // Определяем первый множитель для правой стороны числа.

    left = i - 1; // Определяем первый множитель для левой стороны числа. Все разряды-1 дадут нам самый левый разряд.

    tmp = i / 2; // Определяем условие цикла. Мы не можем брать условие i/2, т.к. при i--, мы не сможем выполнить условие tmp2 == i
    tmp2 = 0;    // определяем переменную для подсчета true после проверки чисел с двух сторон

    while (tmp > 0) // пока половина разрядов  > 0
    {
        l = pow(10, left); // Возводим левый множитель в степень i-1 и иделее, тем самым смещая разряды на 1 в право

        result = ((a / l) % 10 == (a / r) % 10) ? true : false; // Присваиваем true/false для result в зависимости от условий
        // a/l%10 - Пользовательское число деленное на 10^i-1 %10, что дает нам самый левый символ. при i-2, выдаст 2, при i-3 3 и так далее.
        // a/r%10 - Самое правое число. В первом цикле читается как пользовтельсвое число / 1 %10, что дает самую правую цифру.
        // Во втором цикле пользовательское число / 10^1, 10^2, 10^3 и так далее

        if (result == false)
        {
            cout << "Not palindrome";
            break;
        }
        else
        {
            tmp2++;
        }
        // Если результат == fales, выдаем сообщение и прерываем программу.
        // Если результат == true, считаем tmp2 для дальнейшего выведени позитивного ответа.

        r = pow(10, right);
        // Возводим в ^1 ^2 ^3 и т.д.

        right++; // Увеличиваем множитель правой стороны
        left--;  // Уменьшаем множитель левой стороны
        tmp--;   // Регулируем количество итераций цикла.
    }

    if (tmp2 == i / 2)
    {
        cout << "Number is a palindrome";
    }
    // Если счетчик успеха равен количеству разрядов деленному на 2, выдаем сообщение об успехе.
}