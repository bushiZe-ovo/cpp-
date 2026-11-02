#include <iostream>
#include <limits>
using namespace std;

// 按课件要求：整数版本遇到负指数时返回 0。
int getPower(int x, int y) {
    if (y < 0) return 0;
    if (y == 0) return 1;
    return x * getPower(x, y - 1);
}

double getPower(double x, int y) {
    if (y == 0) return 1.0;
    if (y < 0) return 1.0 / getPower(x, -y);
    return x * getPower(x, y - 1);
}

int main() {
    int a, m;
    double b;
    cout << "请输入整数底数 a、实数底数 b 和整数指数 m：";
    if (!(cin >> a >> b >> m) || m < -30 || m > 30) {
        cerr << "输入错误，或指数不在 -30～30 之间\n";
        return 1;
    }
    if (m < 0 && b == 0.0) {
        cerr << "0 的负指数无定义\n";
        return 1;
    }
    if (m >= 0) {
        long long check = 1;
        for (int i = 0; i < m; ++i) {
            check *= a;
            if (check > numeric_limits<int>::max() ||
                check < numeric_limits<int>::min()) {
                cerr << "a^m 超出 int 范围，请换一组输入\n";
                return 1;
            }
        }
    }
    cout << "整数版本 a^m=" << getPower(a, m) << '\n';
    cout << "实数版本 b^m=" << getPower(b, m) << '\n';
    cout << "若希望 a^m 得到实数结果："
         << getPower(static_cast<double>(a), m) << '\n';
    return 0;
}
