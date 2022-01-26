#include <iostream>

using namespace std;

class Animal{
    public:
        Animal(int age = 0, string name = " ", double weight = 0):age(age),name(name),weight(weight){};
        
        void say();
        
    protected:
    int age;
    string name;
    double weight;


};

void Animal::say(){

}

//типы доступа дочерних классов почитать

class home_an: public Animal{

    public:
    
    home_an(int age = 0, string name = " ", double weight = 0, int happy = 1):Animal(age,name,weight), happy(happy){};

    private:
    int happy;

};


int main(){
    Animal cat;
    Animal cat2(10,"catname", 13.5);
    home_an cat3(10,"catname", 13.5, 1);
1

}