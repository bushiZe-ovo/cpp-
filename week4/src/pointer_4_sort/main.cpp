#include <iostream>
using namespace std;

void printArray(const int values[], int length) {
    for (int index = 0; index < length; ++index) {
        cout << values[index] << ' ';
    }
    cout << '\n';
}

void swapValues(int *first, int *second) {
    int saved = *first;
    *first = *second;
    *second = saved;
}

void selectionSort(int *const values, int length) {
    for (int position = 0; position < length - 1; ++position) {
        int minIndex = position;
        for (int index = position + 1; index < length; ++index) {
            if (values[index] < values[minIndex]) {
                minIndex = index;
            }
        }
        swapValues(&values[position], &values[minIndex]);
    }
}

int main() {
    constexpr int length = 10;
    int values[length]{2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
    cout << "Original order: ";
    printArray(values, length);
    selectionSort(values, length);
    cout << "Ascending order: ";
    printArray(values, length);
}
