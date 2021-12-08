#include <iostream>
using namespace std;

// A palindromic number is a number (such as 626) that remains the same when its digits are reversed.
// Write a function that returns true if a given number is a palindrome, and false, if it is not.
// Complete the given function, so that the code in main works and results in the expected output.

// Sample Input:
// 13431

// Sample Output:
// 13431 is a palindrome

bool isPalindrome(int x)
{ 
    int tmp, count, n;
    count = x;
    n = x;
    tmp = 0;

    while (x >= 1)
    {
        count %= 10;
        if (tmp < 10)
        {                     
            tmp = count * 10; 
        }
        else
        {
            tmp = (tmp + count) * 10; 
        }

        x /= 10;   
        count = x; 
    }

    if ((tmp / 10) == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cin >> n;

    if (isPalindrome(n))
    {
        cout << n << " is a palindrome";
    }
    else
    {
        cout << n << " is NOT a palindrome";
    }
    return 0;
}