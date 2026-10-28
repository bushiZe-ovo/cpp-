#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Integer: ";
    if (!(cin >> number)) return 1;
    long long temp = number, reversed = 0;
    if (number < 0) {
        cout << "Not palindrome\n"; return 0;
    }
    while (temp > 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }
    cout << (reversed == number ? "Palindrome" :
             "Not palindrome") << '\n';
    return 0;
}
