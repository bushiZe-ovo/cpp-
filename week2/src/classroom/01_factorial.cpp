#include <iostream>
using namespace std;

int fact(int val);

int main() {
    int result = fact(5);  // 在这里按 F11 进入 fact
    cout << "5! is " << result << '\n';
    return 0;
}

int fact(int val) {
    int product = 1;
    while (val > 1) {
        product *= val;
        --val;
    }
    return product;
}
