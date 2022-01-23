#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 2) Представим интернет магазин. В результате выбора, у заказчика образуется
// картина товаров. Требуется вывести заказчику, максимальную стоимость
// товара и минимальную стоимость товара, а также их номер в корзине
// Входные данные: ввод кол-во товаров и цену каждого.

// Выходные данные:
// 5
// 234 500 340 220 120
// Максимального стоимость товара = 500 руб его порядок = 2
// Минимальная стоимость товара = 120 руб его порядок = 5

// 2
// 234 500
// Максимального стоимость товара = 500 руб его порядок = 2
// Минимальная стоимость товара = 234 руб его порядок = 1

int main()
{
    int productNum(0), maxPrice(INT_MIN), minPrice(INT_MAX), maxInd(0), minInd(0);

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
        *it >= maxPrice ? (maxPrice = *it, maxInd = shoppingCart.) : *it;
        *it <= minPrice ? (minPrice = *it, minInd = shoppingCart) : *it;
        
    }
 
    cout << maxPrice << " " << maxInd << endl << minPrice << " " << minInd << endl;
}
