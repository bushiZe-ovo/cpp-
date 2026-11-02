#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Three-digit integer: ";
    if (!(cin >> number) || number < 100 || number > 999) {
        cout << "Invalid input\n"; return 1;
    }
    int a = number / 100, b = number / 10 % 10;
    int c = number % 10;
    cout << (a*a*a + b*b*b + c*c*c == number ?
             "Armstrong number" : "Not Armstrong number");
    cout << "\nAll three-digit Armstrong numbers: ";
    for (int i = 100; i <= 999; ++i) {
        a = i / 100; b = i / 10 % 10; c = i % 10;
        if (a*a*a + b*b*b + c*c*c == i) cout << i << ' ';
    }
    cout << '\n';
    return 0;
}
