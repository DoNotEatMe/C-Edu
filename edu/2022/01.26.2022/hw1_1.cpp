#include <iostream>

using namespace std;

// 1) (Без инкапсуляции). Создайте структуру игрового персонажа, у которого есть
// следующие параметры: имя, кол-во опыта, скорость, кол-во жизней, наносимый
// урон.
// Входные данные: ввод информации в поля.
// Выходные данные: вывод информации по каждому полю.
// Введите имя: Alex
// Введите сколько опыта: 230
// Введите скорость: 12
// Введите кол-во жизни: 3
// Введите урон: 33
// Персонаж создан!
// Его информация: Alex, 230 xp, 12 sp, 3 hp, 33 dam.

class character
{
public:
    string name;
    int exp;
    int speed;
    int health;
    int damage;
};

int main()
{
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
    cout << "Character created!" << endl;
    cout << "Player info: " << player.name << ", " << player.exp << " exp, " << player.speed << " speed, " << player.health << " health, " << player.damage << " dmg.";
}