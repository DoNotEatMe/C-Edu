#include <iostream>
#include <string>

using namespace std;

int main()
{
    // string str;
    // //string str1 = "Hello world";

    // // cin >> str;
    // getline(cin, str);
    // // cout << str;

    // while (str != "Hello"){
    //     cout << "wrong";
    //     cin >> str;
    // }

    // cout << "yep";

    // int x;
    // string name;
    // cin >> x;

    // for (x; x>0; x--){
    //     cin >> name;
    //     cout << "Hello " << name << endl;
    // }

    // int k, j, count;
    // count = 0;
    // for (i = 0; i < 5; i++)
    // {
    //     cin >> k >> j;
    //     if (k % j == 0)
    //     {
    //         count++;
    //     }
    // }

    // int h, w;
    // cin >> h >> w;
    // for( int i = 0; i < h; i++){
    //     for ( int j = 0; j < w; j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // int h,w;
    // cin >> h;
    // for( int i = 0; i < h; i++){
    //     cin >> w;
    //     for ( int j = 0; j < w; j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    for (int i = 0; i < 6; i++)
    {

        for (int j = 0; j < 6; j++)
        {

            if (i == 5 || i == 3 || (j == 0 && i >= 3) || j ==5)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }

    // int n;
    // cin >> n;

    // for (int i = 0; i < n; i++)
    // {

    //     for (int j = 0; j < n; j++)
    //     {

    //         if ( i + j == n -1)
    //         {
    //             cout << "*";
    //         }
    //         else
    //             cout << " ";
    //     }
    //     cout << endl;
    // }
    // условие для главной диагонали i == j
    // условие побочной диагонали i + j == n -1

    // int n;
    // cin >> n;

    // for (int i = 0; i < n; i++)
    // {

    //     for (int j = 0; j < n; j++)
    //     {

    //         if ( i + j == n -1 || i == j || i == 0 || i == n-1 || j == 0 || j == n-1 )
    //         {
    //             cout << "*";
    //         }
    //         else
    //             cout << " ";
    //     }
    //     cout << endl;
    // }


    // int arr[100];
    // // int arr[3] = {1,2,3}; - создание и инициализация.
    // int col_cal, x;
    // cin >> col_cal;
    // x = 0;

    // for (int i = 0; i < col_cal; i++)
    // {
    //     cin >> arr[i];
    // }

    // for (int i = 0; i < col_cal; i++)
    // {
    //     if (arr[i] % 2 == 0)
    //     {
    //         x++;
    //     }
    // }
    // cout << x;
}