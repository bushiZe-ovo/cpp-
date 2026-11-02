#include <iostream>
using namespace std;

long long fibonacci(int n) {
    if (n <= 2) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "请输入项数 n（1～30）：";
    if (!(cin >> n) || n < 1 || n > 30) {
        cerr << "n 应在 1～30 之间\n";
        return 1;
    }
    cout << "F(" << n << ")=" << fibonacci(n) << '\n';
    return 0;
}
