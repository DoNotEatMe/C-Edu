#include <iostream>
#include <vector>
using namespace std;
 
class Animal{
protected:
    string name;
    int age;
 
public:
    Animal(string name = "No name", int age = 0){
        if (age < 0) age = 0;
        this->name = name;
        this->age = age;
    } 
    ~Animal(){}
    virtual void show(){
        cout <<"Name: "<<name<<" age: "<<age<<endl;
    }
    void setA(){
        cin >> name;
        cin >>age;
    }
 
};
 
class homeAn: public Animal{
    int pretty;
 
public:
    homeAn(string name, int age, int pretty):Animal(name,age){
        if (pretty < 0) pretty = 0;
        this->pretty = pretty;
    }
    homeAn():Animal("No home name",0), pretty(0){}
 
    ~homeAn(){}
 
    void show(){
        
        cout <<"Name: "<<name<<" age: "<<age<< " pretty: " << pretty <<endl;
    }
};
 
class wildAn: public Animal{
    int roar;
 
public:
    wildAn(string name, int age, int roar):Animal(name,age){
        if (roar < 0) roar = 0;
        this->roar = roar;
    }
    wildAn():Animal("No home name",0), roar(0){}
 
    ~wildAn(){}
 
    void show(){
        
        cout <<"Name: "<<name<<" age: "<<age<< " roar: " << roar <<endl;
    }
};
 
 
 
 
 
int main(){
   Animal *wi_ptr = new wildAn;
   Animal *ho_ptr = new homeAn;

   wi_ptr->show();
   ho_ptr->show();

   //закончить вектор из классворк3.
 
}