#include <iostream>
int x = 5, y = 7;
void myFunction() {
    int y = 10;
    std::cout << "x from myFunction " << x << '\n';
    std::cout << "y from myFunction " << y << "\n\n";
}
int main() {
    std::cout << "x from main " << x << '\n';
    std::cout << "y from main " << y << '\n';
    myFunction();
    std::cout << "Back from myFunction!\n\n";
    std::cout << "x from main " << x << '\n';
    std::cout << "y from main " << y << '\n';
}
