#include <iostream>
using namespace std;

void printArray(const int values[], int length) {
    for (int index = 0; index < length; ++index) {
        cout << values[index] << ' ';
    }
    cout << '\n';
}

// 数组形参按指针处理，长度需要单独传入。
void doubleArray(int values[], int length) {
    for (int index = 0; index < length; ++index) {
        values[index] *= 2;
    }
}

void doubleElement(int value) {
    value *= 2;
    cout << "Inside doubleElement: " << value << '\n';
}

int main() {
    constexpr int length = 5;
    int values[length]{0, 1, 2, 3, 4};
    cout << "Original array: ";
    printArray(values, length);
    doubleArray(values, length);
    cout << "Modified array: ";
    printArray(values, length);

    cout << "values[3] before call: " << values[3] << '\n';
    doubleElement(values[3]);
    cout << "values[3] after call:  " << values[3] << '\n';
}
