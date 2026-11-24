#include <iostream>
#include <string>
using namespace std;

size_t countLetters(const string &sentence) {
    size_t count = 0;
    for (char character : sentence) {
        if ((character >= 'A' && character <= 'Z') ||
            (character >= 'a' && character <= 'z')) {
            ++count;
        }
    }
    return count;
}

int main() {
    cout << "Enter an English sentence: ";
    string sentence;
    if (!getline(cin, sentence)) {
        return 0;
    }
    cout << "Number of letters: " << countLetters(sentence) << '\n';
}
