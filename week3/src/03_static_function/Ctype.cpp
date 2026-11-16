#include "Ctype.h"
#include <iostream>
int Ctype::s = 0;
Ctype::Ctype() : a(0) {
    ++s;
    std::cout << "a=" << ++a << '\n';
}
void Ctype::Print() {
    // A static member function has no this pointer.
    std::cout << "s=" << ++s << '\n';
}
