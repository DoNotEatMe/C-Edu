#include <iostream>
using namespace std;

class Animal
{
public:
    string name;
    double weight;
    int age;
    bool sex;
    
    

    void show()
    {
        cout << "Animal name: " << name << endl
             << "Animal weight: " << weight << endl
             << "Animal age: " << age << endl
             << "Animal sex: " << ((sex == true) ? "M" : "W") << endl;
    }

    void read()
    {
        cout << "Insert first animal data: " << endl;
        cin >> name >> weight >> age >> sex;
    }

    void validate()
    {
        weight = weight < 0 ? 0 : weight;
        age = age < 0 ? 0 : age;
    }
    
    double koeff(){
        return weight + age;
    }
};

int main()
{
    Animal cat, dog, parrot;

    cat.read();
    // dog.read();
    // parrot.read();

    // cat.show();
    // dog.show();
    // parrot.show();

    cout << cat.koeff();
};
