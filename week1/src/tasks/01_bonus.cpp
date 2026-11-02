#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double profit, bonus;
    cout << "Profit (yuan): ";
    if (!(cin >> profit) || profit < 0) {
        cout << "Invalid input\n"; return 1;
    }
    if (profit <= 100000) bonus = profit * 0.10;
    else if (profit <= 200000)
        bonus = 10000 + (profit - 100000) * 0.075;
    else if (profit <= 400000)
        bonus = 17500 + (profit - 200000) * 0.05;
    else if (profit <= 600000)
        bonus = 27500 + (profit - 400000) * 0.03;
    else if (profit <= 1000000)
        bonus = 33500 + (profit - 600000) * 0.015;
    else bonus = 39500 + (profit - 1000000) * 0.01;
    cout << fixed << setprecision(2)
         << "Bonus (yuan): " << bonus << '\n';
    return 0;
}
