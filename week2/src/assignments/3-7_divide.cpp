#include <iostream>
#include <limits>
using namespace std;

short divide(unsigned short numerator, unsigned short denominator) {
    if (denominator == 0) {
        return -1;
    }
    return static_cast<short>(numerator / denominator);
}

int main() {
    int inputA, inputB;
    cout << "请输入两个 unsigned short 整数：";
    if (!(cin >> inputA >> inputB) || inputA < 0 || inputB < 0 ||
        inputA > numeric_limits<unsigned short>::max() ||
        inputB > numeric_limits<unsigned short>::max()) {
        cerr << "请输入 0～65535 范围内的整数\n";
        return 1;
    }
    unsigned short a = static_cast<unsigned short>(inputA);
    unsigned short b = static_cast<unsigned short>(inputB);
    if (b != 0 && a / b > numeric_limits<short>::max()) {
        cerr << "商超过 short 的表示范围，请换一组输入\n";
        return 1;
    }
    cout << "结果：" << divide(a, b) << '\n';
    return 0;
}
