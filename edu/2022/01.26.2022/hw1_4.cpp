#include <iostream>

using namespace std;

// 4) Добавьте ф - ию, которая при вызове увеличивает скорость персонажа на 1 + ф -
// ию, которая уменьшает здоровье на 1. Если здоровье станет = 0, то вывести
// сообщение о проигрыше
// Введите имя: Alex
// Введите сколько опыта: -230
// Введите скорость: -8
// Введите кол-во жизни: 1
// Введите урон: 17
// Персонаж создан!
// Его информация: Alex, 0 xp, 0 sp, 1 hp, 20 dam.
// ========Скорость увеличина=============
// Его информация: Alex, 0 xp, 1 sp, 10 hp, 20 dam.
// ========Здоровье уменьшено==============
// Его информация: Alex, 0 xp, 1 sp, 0 hp, 20 dam.
// =========Конец игры=====================

class character
{
private:
    string name;
    int exp;
    int speed;
    int health;
    int damage;

public:
    void setName()
    {
        cout << "Insert name: ";
        cin >> name;
    }

    void setExp()
    {
        cout << "Insert expirience: ";
        exp = positive();
    }

    void setSpeed()
    {
        cout << "Insert player speed: ";
        cin >> speed;
    }

    void setHealth()
    {
        cout << "Insert health: ";
        health = healthGen();
    }

    void setDamage()
    {
        cout << "Insert damage: ";
        damage = damageGen();
    }

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

    int positive()
    {
        int value;
        do
        {
            cin >> value;
            if (value < 0)
            {
                cout << "please insert positive value: ";
            };
        } while (value < 0);

        return value;
    }

    int healthGen()
    {
        int value;
        cin >> value;
        while ((value < 1) || (value > 10))
        {
            cout << "please insert value between 1 and 10: ";
            value = positive();
        }
        return value;
    }
    int damageGen()
    {
        int value;
        cin >> value;
        while ((value < 20) || (value > 100))
        {
            cout << "please insert value between 20 and 100: ";
            value = positive();
        }
        return value;
    }

    void speedUp()
    {
        if (health > 0)
        {
            speed++;
            cout << "-------Speed up!-------" << endl;
            info();
        }
    }
    void peaceDeath()
    {
        if (health > 0)
        {
            health--;
            cout << "-------health decrease-------" << endl;
            info();
        }
        else
        {
            cout << "BUSTED" << endl;
        }
    }
    void info()
    {
        cout << "Player info: " << getName() << ", " << getExp() << " exp, " << getSpeed() << " speed, " << getHealth() << " health, " << getDamage() << " dmg." << endl;
    }
};

int main()
{
    character player;

    player.setName();
    player.setExp();
    player.setSpeed();
    player.setHealth();
    player.setDamage();

    cout << endl;
    cout << "Character created!" << endl;
    player.info();
    for (; player.getHealth() > 0;)
    {
        player.speedUp();
        player.peaceDeath();
    }
}