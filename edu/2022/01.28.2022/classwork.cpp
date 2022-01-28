#include <iostream>

using namespace std;

class Container
{
private:
    int size;
    int mas[100];

public:
    Container(int size = 0) : size(size)
    {
        for (int i = 0; i < size; i++)
        {
            mas[i] = 0;
        }
    };

    void insert()
    {
        for (int i = 0; i < size; i++)
        {
            cin >> mas[i];
        }
    }

    void show()
    {
        for (int i = 0; i < size; i++)
        {
            cout << mas[i] << " ";
        }
    }

    int getV(int index)
    {
        return mas[index];
    }

    int setV(int index, int value)
    {
        return mas[index] = value;
    }
};

int main()
{
    int len;
    cin >> len;
    Container con(len);
    con.insert();
    con.show();

    cout << "Index?" << endl;
    int index;
    cin >> index;
    cout << con.getV(index) << endl;
    
    cout << "Value to change?" << endl;
    int ind2, value;
    cin >> ind2 >> value;
    cout << con.setV(ind2, value) << endl;
}