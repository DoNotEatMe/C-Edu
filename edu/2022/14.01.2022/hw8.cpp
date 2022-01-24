#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 8) Представим интернет магазин. Формируется корзина. Правильно выводите
// слово товар.
// 5
// Размер корзины: 5 товаров
// 1
// Размер корзины: 1 товар
// 2
// Размер корзины: 2 товара
// 21
// Размер корзины: 21 товар
// 24
// Размер корзины: 24 товара1


int main()
{
    int productNum(0);

    cout << "Insert how many products you will buy with first cart: ";
    cin >> productNum;
    vector<int> shoppingCart(productNum);

    string name;

    switch (shoppingCart.size())
    {
    case 1:
        name = "товар \n 1";
        break;

    case 2 ... 4:
        name = "товара \n 2-4";
        break;

    case 5 ... 20:
        name = "товаров \n 5-20";
        break;

    case 21:
        name = "товар \n 21";
        break;

    case 22 ... 24:
        name = "товара \n 22-24";
        break;
    default:
        name = "error";
        break;
    }

    cout << name;
}
