#include "Student.h"
#include <iostream>
int main() {
    Student Student1;
    Student1.Print();
    std::cout << "----------\n";
    Student Student2;
    Student1.Print(); Student2.Print();
    std::cout << "----------\n";
    Student Student3;
    Student1.Print(); Student2.Print(); Student3.Print();
    std::cout << "----------\n";
    Student Student4;
    Student1.Print(); Student2.Print();
    Student3.Print(); Student4.Print();
}
