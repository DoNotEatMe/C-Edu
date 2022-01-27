#include <iostream>

using namespace std;


class character{
    public:
    string name;
    int exp;
    int speed;
    int health;
    int damage;

};

int main(){
    character player;

    cout << "Insert name: ";
    cin >> player.name;
    cout << "Insert expirience: ";
    cin >> player.exp;
    cout << "Insert player speed: ";
    cin >> player.speed;
    cout << "Insert health: ";
    cin >> player.health;
    cout << "Insert damage: ";
    cin >> player.damage;
    cout << endl;
    cout << "Character created!" <<endl;
    cout << "Player info: "  << player.name << ", "<< player.exp << " exp, "<< player.speed << " speed, "<< player.health << " health, "<< player.damage << " dmg.";
    
}