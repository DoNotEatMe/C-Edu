#include <iostream>
#include <cmath>
#include <ctime>

using namespace std;

// https://www.codingame.com/ide/puzzle/temperatures
//  Write a program that prints the temperature closest to 0 among input data.
//  If two numbers are equally close to zero, positive integer has to be considered closest to zero
//  (for instance, if the temperatures are -5 and 5, then display 5).
//  Display 0 (zero) if no temperatures are provided. Otherwise, display the temperature closest to 0.

int *input(const int &lenght, int choose);
int *testcase(const int &lenght, int choose);
void ptintArray(int *arr, const int &lenght);
void nearest(int *arr, const int &lenght);

int main()
{
    srand(time(0));
    int lenght = 3 + rand() % 10;
    cout << endl;
    for (int i = 1; i <= 3; i++)
    {
        int *arr = testcase(lenght, i); // делаем указатель в цикле. Как его разрушить?
        ptintArray(arr, lenght);
        nearest(arr, lenght);
        delete [] arr;
        arr = nullptr;
    }
}

int *testcase(const int &lenght, int choose)
{

    switch (choose)
    {
    case 1:
        cout << "Test case 1. Regular random values from -30 to 30" << endl;
        return input(lenght, choose);
        break;
    case 2:
        cout << "Test case 2. Negative values only" << endl;
        return input(lenght, choose);
        break;
    case 3:
        cout << "Test case 3. All values = 0" << endl;
        return input(lenght, choose);
        break;
    default:
        break;
    }
    return 0;
}

int *input(const int &lenght, int choose)
{
    int *arr = new int[lenght];

    for (int i = 0; i < lenght; i++)
    {
        choose == 1 ? arr[i] = -30 + rand() % 60 : false;
        choose == 2 ? arr[i] = -30 + rand() % 30 : false;
        choose == 3 ? arr[i] = 0 : false;
    }
    return arr;
}

void ptintArray(int *arr, const int &lenght)
{

    for (int i = 0; i < lenght; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void nearest(int *arr, const int &lenght)
{
    int result(0), max(INT_MAX), min(INT_MIN);

    for (int i = 0; i < lenght; i++)
    {
        arr[i] > 0 ? (arr[i] < max ? max = arr[i] : false) : false;
        arr[i] < 0 ? (arr[i] > min ? min = arr[i] : false) : false;
    }

    (max == INT_MAX && min == INT_MIN)
        ? result = 0
    : max - (min * -1) <= 0
        ? result = max
    : result = min;

    cout << "Nearest to zero result is: " << result << endl;
    cout << endl
         << endl;
}