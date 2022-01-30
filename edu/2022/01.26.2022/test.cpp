#include <iostream>
#include <vector>
using namespace std;

class Parent
{
public:
    int x;
    Parent(int x = 1) : x(x) {}

    virtual void test()
   {

        cout << "1";
    }
   
};


class Child : public Parent
{
public:
    int y;
    Child(int y = 0) : y(y){}
    
    virtual void test()
    {

        cout << "2";
    }
   
};



main()
{

    Parent *a = new Child;
    Parent &b = *a;
    a->test();    
    b.test();
    cout << endl;

    

    vector<Parent*> vec2;
    vec2.push_back(a);
    vec2[0]->test();
    
   
    // cout << &vec2[0];
    // Parent *test = vec2[0];
    // test->test();
    
    cout << endl;

    for (auto &it:vec2){
        it->test();
        
        // Parent *test = it;
        // it.test();
        
    }

    cout << endl;

    // for (auto it = vecptr->begin(); it != vecptr->end(); it++){
    //     vecptr[0]
    // }

  
}