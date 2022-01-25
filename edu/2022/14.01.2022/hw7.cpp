
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 7) Представим интернет магазин. В результате выбора, у заказчика образуется
// картина товаров в первом бутике и во втором. Пример из жизни: ff - агрегатор
// магазинов со всего мира. Мы можем заказать футболки из разных площадок, но
// корзина в итоге общая. Поэтому нужно объединить два контейнера и
// отсортировать значения по возрастанию.
// Входные данные: ввод кол-во товаров и цену каждого.
// Выходные данные:
// 5
// 234 520 340 220 820
// 2
// 400 123
// Новая корзина: 123 220 234 340 400 520 820
// Размер корзины: 7

int main()
{
    int productNum(0), productNumTwo(0);

    cout << "Insert how many products you will buy with first cart: ";
    cin >> productNum;

    vector<int> shoppingCart(productNum);

    cout << "Insert products prices in first cart:" << endl;

    for (auto it = shoppingCart.begin(); it != shoppingCart.end(); it++)
    {
        cin >> *it;
    }

    cout << "Insert how many products you will buy with second cart: ";
    cin >> productNumTwo;

    vector<int> shoppingCartTwo(productNumTwo);

    cout << "Insert products prices in second cart:" << endl;

    for (auto it = shoppingCartTwo.begin(); it != shoppingCartTwo.end(); it++)
    {
        cin >> *it;
    }

    for (auto it = shoppingCartTwo.begin(); it != shoppingCartTwo.end(); it++)
    {
        shoppingCart.push_back(*it);
    }

    sort(shoppingCart.begin(), shoppingCart.end());

    cout << "New cart is: ";
    for (auto it = shoppingCart.begin(); it != shoppingCart.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl
         << "New cart size is: " << shoppingCart.size();
}
