#include <iostream>
using namespace std;

int main() {
    short scores[]{84, 65, 77, 60, 88, 86, 92, 93, 70, 66};
    short *scorePointer = scores;
    cout << "Before ++: " << *scorePointer << '\n';
    ++scorePointer;
    cout << "After ++:  " << *scorePointer << '\n';
    --scorePointer;
    cout << "After --:  " << *scorePointer << '\n';

    // long 指针在真正的 long 数组内移动。
    long values[]{84, 65};
    long *longPointer = values;
    cout << "sizeof(short): " << sizeof(short) << " bytes\n";
    cout << "sizeof(long):  " << sizeof(long) << " bytes\n";
    cout << "long pointer before ++: " << *longPointer << '\n';
    ++longPointer;
    cout << "long pointer after ++:  " << *longPointer << '\n';
    --longPointer;
    cout << "long pointer after --:  " << *longPointer << '\n';
}
