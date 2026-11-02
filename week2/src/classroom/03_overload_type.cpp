#include <iostream>
using namespace std;

int magnitude(int x) { return x >= 0 ? x : -x; }
double magnitude(double x) { return x >= 0 ? x : -x; }
long magnitude(long x) { return x >= 0 ? x : -x; }

int main() {
    int x1 = -4;
    double x2 = -5.5;
    long x3 = -6L;
    cout << "|x1|=" << magnitude(x1) << '\n';
    cout << "|x2|=" << magnitude(x2) << '\n';
    cout << "|x3|=" << magnitude(x3) << '\n';
    return 0;
}
