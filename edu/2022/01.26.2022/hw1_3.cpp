#include <iostream>

using namespace std;

class character
{
public:
    string name;
    int exp;
    int speed;
    int health;
    int damage;

    // character(string name, int exp, int speed, int health, int damage):name(name),exp(exp),speed(speed),health(health),damage(damage);
    
    void initExp()
    {
        do
        {
            if (exp < 0)
            {
                cout << endl
                     << "Please use positive numbers. \nInsert expirience: ";
            }
            cin >> exp;
        } while (exp < 0);
    }
    
};

int main()
{
    character player;

    cout << "Insert name: ";
    cin >> player.name;
    cout << "Insert expirience: ";
    player.initExp();
    cout << "Insert player speed: ";
    cin >> player.speed;
    cout << "Insert health: ";
    cin >> player.health;
    cout << "Insert damage: ";
    cin >> player.damage;
    cout << endl;
    cout << "Character created!" << endl;
    cout << "Player info: " << player.name << ", " << player.exp << " exp, " << player.speed << " speed, " << player.health << " health, " << player.damage << " dmg.";
}