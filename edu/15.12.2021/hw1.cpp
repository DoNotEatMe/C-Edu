#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int arrayInit();
// int arrayFormer(int a, int arr[][]);
void arrayPrint(int array[100][100], int a);
int arraySumf(int array[100][100], int a);

int main()
{
    int arr[100][100];
    int a(0),arraySum;

    a = arrayInit();



    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            arr[i][j] =
                i <= j
                    ? (i == j
                           ? arr[i][j] = -34 + (rand() % static_cast<int>(100 - -34 + 1))
                           : arr[i][j] = 1)
                    : arr[i][j] = 0;
        }
    }
    cout << endl
         << "Array former... done" << endl;

    arrayPrint(arr, a);

    arraySum = arraySumf(arr, a);
    cout << "Sum of main diagonal is: " << arraySum;
    cout << endl;
}



int arrayInit()
{
    int a;
    cout << "insert array lenght: ";
    cin >> a;

    return a;
}



void arrayPrint(int arr[100][100], int a)
{

    cout << endl
         << "Array cout" << endl;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int arraySumf(int arr[100][100], int a)
{
    int result(0);
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            result+=
            i == j 
            ? arr[i][j] 
            : 0;
        }
        
    }

    cout << endl;
    return result;

}

