#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 3) Представим интернет магазин. В результате выбора, у заказчика образуется
// картина товаров. НО, админы напортачили и некоторые цены выводятся
// неправильно. (Отри значения)Требуется вывести заказчику, правильную
// стоимость товара в отсортированной последовательности.
// Входные данные: ввод кол-во товаров и цену каждого.
//
// Выходные данные:
// 5
// -234 500 -340 220 -120
// 120 220 234 234 500
//
// 2
// -234 -500
// 234 500

int main()
{
    int productNum(0);

    cout << "Insert how many products you will buy: ";
    cin >> productNum;

    vector<int> shoppingCart(productNum);

    cout << "Insert products prices:" << endl;

    for (auto it = shoppingCart.begin(); it != shoppingCart.end(); it++)
    {
        cin >> *it;
        if (*it < 0) *it*=-1;
    }

    sort(shoppingCart.begin(), shoppingCart.end());


    for (auto it = shoppingCart.begin(); it != shoppingCart.end(); it++)
    {
        cout << *it << " ";
    }


}
