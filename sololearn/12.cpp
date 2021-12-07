// You need to make a countdown app.
// Given a number N as input, output numbers from N to 1 on separate lines.
// Also, when the current countdown number is a multiple of 5, the app should output "Beep".

// Sample Input:
// 12

#include <iostream>
using namespace std;

int main()
{
    int unsigned n;
    cin >> n;
    while ( n >= 1)
    {
        cout << n << endl;
        if ( n%5 == 0 ){
            cout << "Beep" << endl;
        }

        n--;
    }
    
}