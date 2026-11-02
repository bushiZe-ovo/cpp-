#include <iostream>
using namespace std;

inline int maxOfTwo(int x, int y) {
    return x > y ? x : y;
}

int main() {
    int a, b;
    cout << "请输入两个整数：";
    if (!(cin >> a >> b)) {
        cerr << "输入错误\n";
        return 1;
    }
    cout << "较大值：" << maxOfTwo(a, b) << '\n';
    return 0;
}
