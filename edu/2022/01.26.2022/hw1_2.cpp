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


};

int positive()
{
    int value;
    do
    {
        cin >> value;
        if (value < 0 ) {cout << "please insert positive value: ";};
    } while (value < 0);

    return value;
}

int test(int value){
    while ( (value < 1) && (value > 10)){
        // value = positive();
        cin >> value;
        if (value < 1 && value > 10 ) {cout << "please insert value between 1 and 10: ";};
    }
    return value;
}



int main()
{
    character player;
    int tmp;

    cout << "Insert name: ";
    cin >> player.name;

    cout << "Insert expirience: \nmust be positive value\n";

    player.exp = positive();

    cout << "Insert player speed: \nmust be positive value\n";
    
    player.speed = positive();

    cout << "Insert health: \nmust be positive value between 1 and 10\n";
   
    tmp = -3;
    test(tmp);
    
 

    cout << "Insert damage: \nmust be positive value between 20 and 100\n";
   
    player.damage = positive();

    cout << endl;
    cout << "Character created!" << endl;
    cout << "Player info: " << player.name << ", " << player.exp << " exp, " << player.speed << " speed, " << player.health << " health, " << player.damage << " dmg.";
}