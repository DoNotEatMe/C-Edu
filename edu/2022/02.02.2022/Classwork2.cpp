#include <iostream>
#include <vector>
using namespace std;
 
class Figure{ //абстрактный класс
public:
//чистые виртуальные ф-ии - ф-ии кот не имеют тела
//объект абстрактного класса не может быть создан
virtual double perimetr() = 0;
virtual double sq() = 0;
 
virtual void read() = 0;
virtual void show() = 0;
};
 
class Rectangle: public Figure
{
    int w, h;
 
public:
    Rectangle(int w = 0, int h = 0) : w(w), h(h){};
 
    double perimetr()
    {
        return w * h;
    }
 
    double sq(){
        return 2 * (w * h);
    }
    void read(int hi, int wi)
    {
        h = hi;
        w = wi;
    }
 
 
 
    void read(){
        cin >> w >> h;
    }
 
 
};
 
class Circle : public Figure
{
private:
    double r;
public:
    Circle(int r = 0): r(r){}
 
 
    void read(){
        cin >> r;
    }
 
    double perimetr(){
        return 2 * 3.14 * r;
    }
 
    double sq(){
        return 2 * 3.14 * r * r;
    }
};
 
double sum_plkv(vector <Figure*> test){
    double res =0;
 
 
 
 
 
    return res;
}
 
int main(){
// Circle kr;
// kr.read();
// cout << kr.perimetr()<<" "<<kr.sq()<<endl;
 
 
 
// Rectangle req;
// req.read();
// cout << req.perimetr()<<" "<<req.sq()<<endl;
 
int n;
cin >> n;
vector <Figure*> figures;
 
for (int i = 0; i < n; i ++){
    string what;
    cin >> what;
 
    if (what == "Req"){
        Rectangle* ptr1 = new Rectangle;
        ptr1->read();
        figures.push_back(ptr1);
}
else if (what == "Cir"){
    Circle* ptr2 = new Circle;
    ptr2->read();
    figures.push_back(ptr2);
}
 
cout << sum_plkv(figures)<<endl;
cout << sum_dlokr(figures)<<endl;
 
}
 
//ф-ия кот-я считает сумму всех площадей 
//ф-ия кот-я считает сумму всех длин