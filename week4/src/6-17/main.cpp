#include <iostream>
using namespace std;

int main() {
    int value = 0;
    int *valuePointer = &value;
    *valuePointer = 9;
    cout << "the value at p: " << *valuePointer << '\n';
}
