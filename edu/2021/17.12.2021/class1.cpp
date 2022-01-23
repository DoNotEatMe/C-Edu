#include <iostream>
#include <cmath>

using namespace std;

float func( int a, int b, int c);

int main()
{
    float a, b, c, result;
    cin >> a >> b >> c;
    // ax^2 + bx + c 
    

    result = func(a,b,c);
    cout << result;

    
}

float func(int a, int b, int c){
    double result;
    result = sqrt(pow(b,2) - 4*a *c);
    return result;

}
