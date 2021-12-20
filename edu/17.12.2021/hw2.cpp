// Задача 2 : Подсчитать кол-во эл-тов в массиве, которые кратны введенному
// значению
#include <iostream>
#include <cmath>
#include <ctime>
#include <string>

using namespace std;

void arrayFormer(int a);
int arrayCount(int arr, int a);

int main()
{

    int x;
    srand(time(0));
    cout << "insert %: ";
    cin >> x;
    arrayFormer(x);
}

void arrayFormer(int a)
{
    int arr[100][100];
    int n = 2 + rand() % 12;
    int count(0);
    string yn;

    cout << endl
         << "Array lenght: " << n << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = -10 + rand() % 100;
            cout << arr[i][j] << " ";
            count += arrayCount(arr[i][j], a);
        }
        cout << endl;
    }

    cout << endl
         << "Count of arr[i][j]%" << a << " == 0 in array is " << count << endl;

    cout << "Repeat? y/n" << endl;
    cin >> yn;


    while (yn == "y" && yn != "n")
    {
        cout << " Please reenter %: " << endl;
        cin >> a;
        arrayFormer(a);
        cout << endl
             << "Repeat? y/n1" << endl;
        cin >> yn;
    }
    if (yn == "n")
    {
        cout << "thanks for your attention" << endl;
        return;
    }
}

int arrayCount(int arr, int a)
{
    int count;
    arr % a == 0 ? count++ : count;
    // cout << " __" << count << "__ ";
    return count;
}
