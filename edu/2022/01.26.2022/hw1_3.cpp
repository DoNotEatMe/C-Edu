#include <iostream>

using namespace std;

class character
{
private:
    string name;
    int exp;
    int speed;
    int health;
    int damage;

public:
    // character(string name, int exp, int speed, int health, int damage):name(name),exp(exp),speed(speed),health(health),damage(damage){};

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
    cout << "Player info: " << player.getName() << ", " << player.getExp() << " exp, " << player.getSpeed() << " speed, " << player.getHealth() << " health, " << player.getDamage() << " dmg.";

    

}