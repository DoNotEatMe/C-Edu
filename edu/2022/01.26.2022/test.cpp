#include <iostream>
using namespace std;

void test(int &value)
{
    
    while (value<1&&)
    {
        cout << "please insert value between 1 and 10: ";
        // value = positive();
        // cin >> value;
        if ((value<1) && (value > 10))
        {
            
        };
    }
    // return value;
}

main()
{
    int tmp = -3;
    test(tmp);
}