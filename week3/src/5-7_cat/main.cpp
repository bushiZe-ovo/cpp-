#include "Cat.h"
#include <iostream>

using namespace std;

int main() {
    cout << "Initial: " << Cat::getNumOfCats() << '\n';

    {
        Cat firstCat;
        cout << "Create a: " << Cat::getNumOfCats() << '\n';

        {
            Cat secondCat;
            Cat copiedCat(firstCat);
            cout << "Create b,c: " << Cat::getNumOfCats() << '\n';

            secondCat = firstCat; // 给已有对象赋值，对象数量不变。
            cout << "Assign b=a: " << Cat::getNumOfCats() << '\n';
        } // copiedCat 和 secondCat 在这里析构。

        cout << "Leave inner: " << Cat::getNumOfCats() << '\n';
    } // firstCat 在这里析构。

    cout << "Leave outer: " << Cat::getNumOfCats() << '\n';
}
