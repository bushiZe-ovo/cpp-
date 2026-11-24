#include <iostream>
using namespace std;

void printArray(const int (&values)[3]) {
    for (int value : values) {
        cout << value << ' ';
    }
    cout << '\n';
}

void addFiveAndPrint(int (&values)[3]) {
    cout << "Before: ";
    printArray(values);
    for (int &value : values) {
        value += 5;
    }
    cout << "After:  ";
    printArray(values);
}

void showStaticArray() {
    static int values[3]{};
    cout << "Static array\n";
    addFiveAndPrint(values);
}

void showAutomaticArray() {
    int values[3]{1, 2, 3};
    cout << "Automatic array\n";
    addFiveAndPrint(values);
}

int main() {
    for (int call = 1; call <= 2; ++call) {
        cout << "Call " << call << '\n';
        showStaticArray();
        showAutomaticArray();
    }
}
