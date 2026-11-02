#include <iostream>
using namespace std;

void sum(int num = 10) {
    int total = 0;
    for (int i = 1; i <= num; ++i) {
        total += i;
    }
    cout << "num=" << num << ", sum=" << total << '\n';
}

int main() {
    sum(100);  // 显式实参优先：num=100
    sum();     // 使用默认实参：num=10
    return 0;
}
