#include <iostream>
#include <vector>

using namespace std;

// 2) Раз ты дошел до этого пункта, то молодец! Вероятно у тебя появился вопрос: А
// почему мои особые поля наследуемого объекта не выводятся? Я даже
// перегрузил ф-ию с новым выводом, но ничего не выходит. А почему мы вообще в
// вектор объектов Player записываем другие объекты? Если ты при реализации
// задал себе такие же вопросы - супер! Попробуй сам ответить на выделенный
// вопрос. (Подсказка: подумай про память)
// Если интересно, то стоит почитать про полиморфизм и виртуальные ф-ии при
// наследовании, ну а если хочешь получить ответ еще раньше - то почитай про
// абстракцию.

class character
{

protected:
    string name;
    int exp;
    int speed;
    int health;
    int damage;

public:
    character(string name = "player", int exp = 0, int speed = 5, int health = 10, int damage = 3) : name(name), exp(exp), speed(speed), health(health), damage(damage) {}

    string getName()
    {
        return name;
    }
    int getExp()
    {
        return exp;
    }
    int getSpeed()
    {
        return speed;
    }
    int getHealth()
    {
        return health;
    }
    int getDamage()
    {
        return damage;
    }

    virtual void info()
    {
        cout << "Player info: " << getName() << ", " << getExp() << " exp, " << getSpeed() << " speed, " << getHealth() << " health, " << getDamage() << " dmg. " << endl;
    }
    virtual ~character()
    {
        cout << "destructed character ";
    }
};

class golum : public character
{
private:
    int goblinPower;

public:
    golum(string name = "Goblin", int exp = 0, int speed = 4, int health = 13, int damage = 7, int goblinPower = 1) : character(name, exp, speed, health, damage), goblinPower(goblinPower) {}

    int getPower()
    {
        return goblinPower;
    }

    void info()
    {
        cout << "Player info: " << getName() << ", " << getExp() << " exp, " << getSpeed() << " speed, " << getHealth() << " health, " << getDamage() << " dmg, " << getPower() << " native power." << endl;
    }
    ~golum()
    {
        cout << "destructed golum ";
    }
};

class fairy : public character
{
private:
    int fairyPower;

public:
    fairy(string name = "Fairy", int exp = 0, int speed = 7, int health = 7, int damage = 2, int fairyPower = 2) : character(name, exp, speed, health, damage), fairyPower(fairyPower)
    {
    }

    void info()
    {
        cout << "Player info: " << getName() << ", " << getExp() << " exp, " << getSpeed() << " speed, " << getHealth() << " health, " << getDamage() << " dmg, " << getPower() << " native power." << endl;
    }
    int getPower()
    {
        return fairyPower;
    }
    ~fairy()
    {
        cout << "destructed fairy ";
    }
};

class stoneman : public character
{
private:
    int stonePower;

public:
    stoneman(string name = "StoneMan", int exp = 0, int speed = 2, int health = 20, int damage = 1, int stonePower = 3) : character(name, exp, speed, health, damage), stonePower(stonePower)
    {
    }

    void info()
    {
        cout << "Player info: " << getName() << ", " << getExp() << " exp, " << getSpeed() << " speed, " << getHealth() << " health, " << getDamage() << " dmg, " << getPower() << " native power." << endl;
    }
    int getPower()
    {
        return stonePower;
    }
    ~stoneman()
    {
        cout << "destructed stoneman ";
    }
};

class stonemanver2 : public character
{
private:
    int stone2Power;

public:
    stonemanver2(string name = "StoneManVer2", int exp = 0, int speed = 1, int health = 40, int damage = 3, int stone2Power = 5) : character(name, exp, speed, health, damage), stone2Power(stone2Power)
    {
    }

    void info()
    {
        cout << "Player info: " << getName() << ", " << getExp() << " exp, " << getSpeed() << " speed, " << getHealth() << " health, " << getDamage() << " dmg, " << getPower() << " native power." << endl;
    }
    int getPower()
    {
        return stone2Power;
    }
    ~stonemanver2()
    {
        cout << "destructed stonemanver2 ";
    }
};

int main()
{
    vector<character *> npc;
    character *gol_ptr = new golum;
    character *fai_ptr = new fairy;
    character *st1_ptr = new stoneman;
    character *st2_ptr = new stonemanver2;

    npc.push_back(gol_ptr);
    npc.push_back(fai_ptr);
    npc.push_back(st1_ptr);
    npc.push_back(st2_ptr);

    for (auto &it : npc)
    {
        it->info();
    }
    cout << endl;

    //Виртуальные мать его декструкторы для указателей родительского класса на мать их дочерние классы в динамической памяти, которые нужно вызывать руками для каждого элемента.
    // деструкторы не убивают классы из динамической памяти,
    // соответственно нужно вызывать каждый руками
    // уничтожают все только в рамках указателя, не уничтожают все как в инициализированных в стеке.
    delete gol_ptr;
    cout << endl;
    delete fai_ptr;
    cout << endl;
    delete st1_ptr;
    cout << endl;
    delete st2_ptr;
    cout << endl;
    delete gol_ptr; // не срабатывает, потому что элемент уже уничтожен.

    //  for (auto &it : npc)
    // {
    //     it->info();
    // }
}