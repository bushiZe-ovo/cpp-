#include <iostream>
using namespace std;

// 使用两个不同的变量调用时，交换它们的值。
// 使用同一个变量调用时，两次引用指向同一对象，结果不变。
void swapValues(int& v1, int& v2) {
    if (&v1 == &v2) {
        return;
    }
    int temp = v2;
    v2 = v1;
    v1 = temp;
}

int main() {
    int a, b;
    cout << "请输入两个整数 a b：";
    if (!(cin >> a >> b)) {
        cerr << "输入错误\n";
        return 1;
    }
    swapValues(a, a);  // 观察两个形参的地址
    cout << "swapValues(a, a) 后：a=" << a << ", b=" << b << '\n';
    swapValues(a, b);
    cout << "swapValues(a, b) 后：a=" << a << ", b=" << b << '\n';
    return 0;
}
