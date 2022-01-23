
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 6) Представим интернет магазин. В результате выбора, у заказчика образуется
// картина товаров. Затем заказчик понимает, что ему нужно экономить бюджет и
// поэтому нужно удалить все товары больше 500 руб.
// Входные данные: ввод кол-во товаров и цену каждого.
// Выходные данные: 
// 5
// 234 520 340 220 820
// Новая корзина: 234 340 220
// Размер корзины: 3
// 2
// 234 500 509 530
// Новая корзина: 234 500
// Размер корзины: 2

int main()
{
    int productNum(0), maxPrice(INT_MIN);

    cout << "Insert how many products you will buy: ";
    cin >> productNum;

    vector<int> shoppingCart(productNum);

    cout << "Insert products prices:" << endl;

    for (auto it = shoppingCart.begin(); it != shoppingCart.end(); it++)
    {
        cin >> *it;
    }

    for (auto it = shoppingCart.begin(); it != shoppingCart.end(); it++)
    {
        *it >= maxPrice ? (maxPrice = *it) : *it;
    }

    cout << "Max price of product from shopping cart is: " << maxPrice << endl;
    for (auto it = shoppingCart.begin(); it != shoppingCart.end();)
    {
        if (*it > 500)
            shoppingCart.erase(it);
        else
            ++it;
    }
    cout << "New cart is: ";
    for (auto it = shoppingCart.begin(); it != shoppingCart.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl
         << "New size is: " << shoppingCart.size();
}
