#include <iostream>
#include <cmath>
using namespace std;

int *read(int &size)
{
    int *Array = new int[size];

    for (int i = 0; i < size; i++)
    {
        Array[i] = rand();
        cout << Array[i] << " ";
    }
    return Array;
}

int *arrSum(int *ptrArr1, int *ptrArr2, int size)
{
    int *Array = new int[size];

    for (int i = 0; i < size; i++)
    {
        Array[i] = ptrArr1[i] + ptrArr2[i];
    }

    return Array;
}

int main()
{
    int size;
    cin >> size;
    int *ptrArr1 = read(size);
    cout << endl;
    int *ptrArr2 = read(size);

    int *ptrArr3 = arrSum(ptrArr1, ptrArr2, size);

    cout << endl
         << "arr3: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << ptrArr3[i] << " ";
    }
}