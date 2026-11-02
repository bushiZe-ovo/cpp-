#include <iostream>
using namespace std;
int main() {
    int peaches = 1;
    for (int day = 9; day >= 1; --day)
        peaches = (peaches + 1) * 2;
    cout << "Peaches on day 1: " << peaches << '\n';
    return 0;
}
