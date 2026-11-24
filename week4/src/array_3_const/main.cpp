#include <iostream>
using namespace std;

void showArray(const int values[], int length) {
    // values[0] /= 2;  // 取消注释会触发只读元素的编译错误。
    for (int index = 0; index < length; ++index) {
        cout << values[index] << ' ';
    }
    cout << '\n';
}

int main() {
    int values[]{10, 20, 30};
    cout << "Inside showArray: ";
    showArray(values, 3);
    cout << "After the call: ";
    showArray(values, 3);
}
