#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) {
        return false;
    }
    for (int divisor = 2; divisor <= n / divisor; ++divisor) {
        if (n % divisor == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int number;
    cout << "请输入一个整数：";
    if (!(cin >> number)) {
        cerr << "输入错误\n";
        return 1;
    }
    cout << number << (isPrime(number) ? " 是质数\n" : " 不是质数\n");
    return 0;
}
