#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Представим интернет магазин. При минимальной сумме заказа 1000 рублей
// заказчику предоставляется бесплатная доставка. Требуется вывести заказчику,
// бесплатная у него доставка или нет.
// Входные данные: ввод кол-во товаров и цену каждого.
// Выходные данные: Доставка бесплатная, доставка не бесплатная.
// 5
// 234 500 340 220 120
// Доставка бесплатная
// 2
// 234 500
// Доставка не бесплатная

int main()
{
    int minOrderPrice(1000), productNum(0), sumCount(0);

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
        sumCount += *it;
    }

    sumCount >= 1000 ? cout << "Delivery will be free" : cout << "You will pay for this delivery";
}