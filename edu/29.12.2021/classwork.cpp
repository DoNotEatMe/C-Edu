#include <iostream>
#include <cmath>
#include <ctime>
#include <vector>

using namespace std;

main()
{
    srand(time(0));
    int lenght = 3 + rand() % 13;
    // int *arr = new int [lenght];
    vector<int> arr(lenght);
    int val(0), posInd;

    cout << "insert value to paste: ";
    cin >> val;
    cout << "insert index to paste between 0 and " << lenght - 1 << ": ";
    cin >> posInd;

    for (int i = 0; i < lenght; i++)
    {

        if (i >= posInd)
        {
            arr[i + 1] = -50 + rand() % 100;
            i == posInd ? arr[i] = val : false;
        }
        else
        {
            arr[i] = -50 + rand() % 100;
        }
    }

    for (int i = 0; i < lenght + 1; i++)
    {
        cout << arr[i] << " ";
    }
}