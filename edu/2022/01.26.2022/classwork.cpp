#include <iostream>
#include <stdlib.h>
using namespace std;

class floor
{
protected:
    double x;
    double y;

public:
    floor(double _x = 0, double _y = 0) : x(_x), y(_y){};

    double square()
    {
        return x * y;
    }
};

class room : public floor
{
protected:
    double z;

public:
    room(double _x = 0, double _y = 0, double _z = 0) : floor(_x, _y), z(_z){};
    double roomsqr()
    {
        return square() * z;
    }
};

int main()
{
    double x, y, z;
    cin >> x >> y >> z;

    room obj2(x, y, z);

    cout << obj2.roomsqr() << " " << obj2.square() << endl;
}
