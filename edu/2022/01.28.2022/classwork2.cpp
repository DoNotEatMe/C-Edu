#include <iostream>
#include <algorithm>
using namespace std;

class Container
{
    int size;
    int *mas; // динамическим

public:
    Container(int size = 0) : size(size)
    {
        mas = new int[size];
        for (int i = 0; i < size; i++)
        {
            mas[i] = 0;
        }
    }

    //Деструктор - ф-и, кот запуск в конце программы
    //Деструктор - один
    //Имя деструктора - ~[Название класса]
    //Деструктор не имеет параметров
    //Кол-во объектов = кол-во деструкторов

    ~Container()
    {
        cout << "Деструктор сработал" << endl;
        delete[] mas;
    }

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

    void change(int index, int value)
    {
        mas[index] = value;
    }

    void pop_back()
    {
        int *new_ptr = new int[size];
        for (int i = 0; i < size; i++)
        {
            new_ptr[i] = mas[i];
        }
        delete[] mas;
        mas = new_ptr;
    }

    void push_back(int value)
    {
        int *new_ptr = new int[size + 1];
        for (int i = 0; i < size; i++)
        {
            new_ptr[i] = mas[i];
        }
        new_ptr[size] = value;
        size++;
        delete[] mas;
        mas = new_ptr;
    }

    int count(){
        
    }
    int getSize(){
        return size;
    }

    


};



int count( Container test, int value){
    int col = 0;
    for (size_t i = 0; i < test.getSize(); i++)
    {
        if (test.getV(i) == value ) col++;
    }
    return col;

}

int main()
{
    int len;
    cin >> len;
    Container con(len);
    // con.~Container();

    con.insert();
    con.show();
    int value;
    cin >> value;
    // cout << con.count(value);
    cout << count(con, value);

    // cout << endl;
    // con.pop_back();
    // con.show();
    // cout << endl;
    // int value = 122;
    // con.push_back(value);
    // con.show();
    // cout <<"Число по какому индексу найи?"<<endl;
    // int index;
    // cin >> index;
    // cout << con.getV(index)<<endl;
    // cout <<"Число на каком индексе заменить"<<endl;
    // int ind2;
    // cin >> ind2;
    // cout <<"На что заменить?"<<endl;
    // int val;
    // cin >> val;
    // con.change(ind2, val);
    // con.show();


    // ДЗ
    // cout << find (con,value); //возвращает индекс значения которое ищем
    // cout << findif (con,value, >0); //возвращаем индекс первого элемента, если нет то -1.
    
}