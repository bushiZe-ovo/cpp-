#include <iostream>
using namespace std;
int main() {
    int score;
    cout << "Score (0-10 integer): ";
    if (!(cin >> score) || score < 0 || score > 10) {
        cout << "Invalid input\n"; return 1;
    }
    if (score >= 9) cout << "你认为电影经典\n";
    else if (score >= 7) cout << "你认为电影非常好\n";
    else if (score >= 5) cout << "你认为电影一般\n";
    else cout << "你认为电影烂片\n";
    return 0;
}
