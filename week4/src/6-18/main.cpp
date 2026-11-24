#include <iostream>
using namespace std;

int fn1() {
    int *number = new int(5);
    int result = *number;
    delete number;
    return result;
}

int main() {
    int value = fn1();
    cout << "the value of a is: " << value << '\n';
}
