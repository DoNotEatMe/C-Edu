#include <iostream>
#include <vector>

using namespace std;

class Character{

    public:
    Character(string name = "Character", int age = 1, int sp = 1):name(name),age(age),sp(sp){};
    virtual void Show(){
        cout << name << " " << age << " "<< sp;
    }
    protected:
    string name;
    int age, sp;

};

class Sin:public Character{

public: 
int hp, jump;
Sin(string name = "Sin", int age = 10, int sp = 2, int hp = 4, int jump = 0):Character(name,age,sp),hp(hp),jump(jump){};
  virtual void Show(){
        cout << name << " " << age << " " << sp << " "<< hp <<" " <<jump;
    }

};

class Wolf:public Character{
    public:
int hp, roar;
Wolf(string name = "Wol", int age = 12, int sp = 3, int hp = 5, int roar = 0):Character(name,age,sp),hp(hp),roar(roar){
};
virtual void Show(){
        cout << name << " " << age << " " << sp << " "<< hp <<" " << roar;
    }


};

class Mario:public Character{
    public:
int hp, jump;
Mario(string name = "Mar", int age = 14, int sp = 4, int hp = 6,  int jump = 0):Character(name,age,sp),hp(hp),jump(jump){};
virtual void Show(){
        cout << name << " " << age << " " << sp << " "<< hp <<" " <<jump;
    }


};


class Soldier:public Character{
    public:
int hp, jump;
Soldier(string name = "Sol", int age = 25, int sp = 5, int hp = 7, int jump = 0):Character(name,age,sp),hp(hp),jump(jump){};
virtual void Show(){
        cout << name << " " << age << " " << sp << " "<< hp <<" " <<jump;
    }


};






int main(){

vector<Character*> characters;
int col;
cout << "Insert characters number";
cin >> col;


for (int i = 0; i < col; i++){

    string what;
    cout << "character name:";
    cin>> what;

    if (what == "sin"){
        Character* pSin = new Sin;
        characters.push_back(pSin);
    }
     if (what == "wol"){
        Character* pWol = new Wolf;
        characters.push_back(pWol);
    }
     if (what == "mar"){
        Character* pMar = new Mario;
        characters.push_back(pMar);
    }
     if (what == "sol"){
        Character* pSol = new Soldier;
        characters.push_back(pSol);
    }
    if (what == "cha"){
        Character* pChar = new Character;
        characters.push_back(pChar);
    }

}


cout << endl;
for (auto &it:characters){
    it->Show();
    cout << endl;

}

for (auto &it:characters){
    delete it;

}

}