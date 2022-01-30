#include <iostream>
#include <vector>

using namespace std;

// На данный момент должно быть следующее: можно создать персонажей
// одного типа, у которых уже заданы значения полей, кроме имени (его можно
// изменить). Давайте расширим нашего персонажа. Пусть будет: голум, фея,
// каменный человек, каменный человек в огне + одного придумай сам.
//  Нужно реализовать механизм наследования от исходного класса. Значение
// полей дочерних классов измените на свои. В каждом классе разные значения
// полей.

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
        cout << "Player info: " << getName() << ", " << getExp() << " exp, " << getSpeed() << " speed, " << getHealth() << " health, " << getDamage() << " dmg." << endl;
    }
};

class golum : public character
{
private:
    int goblinPower;

public:
    golum(string name = "Goblin", int exp = 0, int speed = 4, int health = 13, int damage = 7, int goblinPower = 1) : character(name, exp, speed, health, damage), goblinPower(goblinPower)
    {
    }

    void info()
    {
        cout << "Player info: " << getName() << ", " << getExp() << " exp, " << getSpeed() << " speed, " << getHealth() << " health, " << getDamage() << " dmg, " << getPower() << " native power." << endl;
    }
    int getPower()
    {
        return goblinPower;
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
};

int main()
{
    vector<character> npc;
    golum gol;
    fairy fai;
    stoneman st1;
    stonemanver2 st2;

    npc.push_back(gol);
    npc.push_back(fai);
    npc.push_back(st1);
    npc.push_back(st2);

    for (auto &it : npc)
    {
        it.info();
    }
}