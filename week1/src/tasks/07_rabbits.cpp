#include <iostream>
using namespace std;
int main() {
    int previous = 1, current = 1;
    cout << "Month\tPairs\tRabbits\n";
    cout << "1\t1\t2\n2\t1\t2\n";
    for (int month = 3; month <= 20; ++month) {
        int next = previous + current;
        previous = current;
        current = next;
        cout << month << '\t' << current << '\t'
             << current * 2 << '\n';
    }
    return 0;
}
