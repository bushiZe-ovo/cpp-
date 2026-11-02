#include <iostream>
#include <climits>
using namespace std;
int main() {
    int n, a;
    cout << "n and a (n >= 1, 1 <= a <= 9): ";
    if (!(cin >> n >> a) || n < 1 || a < 1 || a > 9) {
        cout << "Invalid input\n"; return 1;
    }
    long long term = 0, sum = 0;
    for (int i = 1; i <= n; ++i) {
        if (term > (LLONG_MAX - a) / 10) {
            cout << "Overflow\n"; return 1;
        }
        term = term * 10 + a;
        if (sum > LLONG_MAX - term) {
            cout << "Overflow\n"; return 1;
        }
        sum += term;
    }
    cout << "Sum: " << sum << '\n';
    return 0;
}
