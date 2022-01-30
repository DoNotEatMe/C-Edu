#include <iostream>

using namespace std;

// Однако, то, что мы сейчас реализовывали - это не игра, а какое-то читерство. Т.е.
// мы сами задавали все значения. Обычно, когда играешь в игру у персонажа
// можно задать только имя. Остальные поля они уже заданы в момент нашего
// запуска. (Конструктор по умолчанию) Задайте персонажу только имя.
// (Модификатор private у полей).
// Введите имя: Alex
// Персонаж создан!
// Его информация: Alex, 0 xp, 5 sp, 3 hp, 20 dam.

class character
{
private:
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
    string playerName;
    cout << "insert name: ";
    cin >> playerName;
    character player(playerName);
    cout << endl;
    cout << "Character created!" << endl;
    player.info();
    for (; player.getHealth() > 0;)
    {
        player.speedUp();
        player.peaceDeath();
    }
}