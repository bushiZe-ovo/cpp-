#include <iostream>
#include <string>
#include <utility>
using namespace std;

// 区间 [left, end) 的右端点不包含在区间中。
void reverseRange(string &text, size_t left, size_t end) {
    if (end - left <= 1) {
        return;
    }
    swap(text[left], text[end - 1]);
    reverseRange(text, left + 1, end - 1);
}

void reverse(string &s) {
    reverseRange(s, 0, s.size());
}

int main() {
    cout << "Enter an ASCII string: ";
    string text;
    if (!getline(cin, text)) {
        return 0;
    }
    reverse(text);
    cout << "Reversed: " << text << '\n';
}
