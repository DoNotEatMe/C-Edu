#include <iostream>

using namespace std;

// 2) (Без инкапсуляции). Доработайте задание 1 таким образом, что опыт, скорость
// не могут быть отрицательными, кол -во жизней лежит в диапазоне [1 - 10], а
// урон [20 - 100].
// Введите имя: Alex
// Введите сколько опыта: -230
// Введите скорость: -8
// Введите кол-во жизни: 12
// Введите урон: 17
// Персонаж создан!
// Его информация: Alex, 0 xp, 0 sp, 10 hp, 20 dam.

class character
{
public:
    string name;
    int exp;
    int speed;
    int health;
    int damage;
};

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

int health()
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

int damage()
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

int main()
{
    character player;

    cout << "Insert name: ";
    cin >> player.name;

    cout << "Insert expirience: \nmust be positive value\n";
    player.exp = positive();

    cout << "Insert player speed: \nmust be positive value\n";
    player.speed = positive();

    cout << "Insert health: \nmust be positive value between 1 and 10\n";
    player.health = health();

    cout << "Insert damage: \nmust be positive value between 20 and 100\n";
    player.damage = damage();

    cout << endl;
    cout << "Character created!" << endl;
    cout << "Player info: " << player.name << ", " << player.exp << " exp, " << player.speed << " speed, " << player.health << " health, " << player.damage << " dmg.";
}