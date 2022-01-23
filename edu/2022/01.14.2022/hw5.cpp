#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 5) Представим интернет магазин. В результате выбора, у заказчика образуется
// картина товаров. Затем заказчик понимает, что ему нужно экономить бюджет и
// поэтому нужно удалить максимальный по стоимости товар. Требуется
// вывести заказчику, максимальную стоимость товара и удалить его из
// контейнера. (Если их более одного, то удалить все максимальные)
// Входные данные: ввод кол-во товаров и цену каждого.
//
// Выходные данные:
// 5
// 234 500 340 220 120
// Максимального стоимость товара = 500 руб
// Новая корзина: 234 340 220 120
// Размер корзины: 4
//
// 2
// 234 500 500 500 
// Максимального стоимость товара = 500 руб
// Новая корзина: 234
// Размер корзины: 1

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
        if (*it == maxPrice)
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