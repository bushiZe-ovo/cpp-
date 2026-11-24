#include <iostream>
using namespace std;

void printArray(const int (&values)[3]) {
    cout << values[0] << ' ' << values[1] << ' ' << values[2] << '\n';
}

int main() {
    cout << "Enter 1 for the safe version, 2 for the slide experiment: ";
    int mode = 0;
    if (!(cin >> mode) || (mode != 1 && mode != 2)) {
        cerr << "Please enter 1 or 2.\n";
        return 1;
    }

    int values[]{1, 2, 3};
    cout << "Before: ";
    printArray(values);
    if (mode == 2) {
        cout << "Invalid write through double*: undefined behavior." << endl;
        // 仅复现课件现象。此处用不相容的类型写 int 对象。
        double *wrongPointer = reinterpret_cast<double *>(&values[0]);
        *wrongPointer = 5.0;
    } else {
        int *valuePointer = &values[0];
        *valuePointer = 5;
    }
    cout << "After:  ";
    printArray(values);
}
