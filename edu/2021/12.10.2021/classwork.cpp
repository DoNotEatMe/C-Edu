#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[100][100], m,n;
    cin >> m >> n;

     for (int i = 0; i < m; i++)
    {
        
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 1;
        }
        cout << endl;
    }

    for (int i = 0; i < m; i++)
    {
        
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j];
        }
        cout << endl;
    }
}