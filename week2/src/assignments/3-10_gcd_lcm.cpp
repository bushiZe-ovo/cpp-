#include <iostream>
#include <numeric>
#include <limits>
using namespace std;

void findGcdLcm(int a, int b, int& gcd, long long& lcm) {
    int x = a, y = b;
    while (y != 0) {
        int remainder = x % y;
        x = y;
        y = remainder;
    }
    gcd = x;
    lcm = static_cast<long long>(a / gcd) * b;
}

int main() {
    int a, b;
    cout << "请输入两个正整数：";
    if (!(cin >> a >> b) || a <= 0 || b <= 0) {
        cerr << "请输入两个正整数\n";
        return 1;
    }
    int gcd;
    long long lcm;
    findGcdLcm(a, b, gcd, lcm);
    cout << "最大公约数：" << gcd << '\n';
    cout << "最小公倍数：" << lcm << '\n';
    return 0;
}
