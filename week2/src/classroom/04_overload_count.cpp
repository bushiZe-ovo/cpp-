#include <iostream>
using namespace std;

int add(int x, int y) { return x + y; }
int add(int x, int y, int z) { return x + y + z; }

int main() {
    int a = 3, b = 4, c = 5;
    cout << a << '+' << b << '=' << add(a, b) << '\n';
    cout << a << '+' << b << '+' << c << '=' << add(a, b, c) << '\n';
    return 0;
}
