#include "Friends.h"
#include <iostream>
int main() {
    X x;
    Y y;
    Z z;
    std::cout << "Initial i=" << x.getI() << '\n';
    y.g(&x);
    std::cout << "After Y::g i=" << x.getI() << '\n';
    z.f(&x);
    std::cout << "After Z::f i=" << x.getI() << '\n';
    h(&x);
    std::cout << "After h i=" << x.getI() << '\n';
}
