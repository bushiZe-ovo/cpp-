#include <iostream>
using namespace std;

inline double circleArea(double radius) {
    return 3.1416 * radius * radius;
}

int main() {
    for (int radius = 1; radius <= 3; ++radius) {
        cout << "r=" << radius << ", area=" << circleArea(radius) << '\n';
    }
    return 0;
}
