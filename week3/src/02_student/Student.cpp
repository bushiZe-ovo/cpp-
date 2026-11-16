#include "Student.h"
#include <iostream>
int Student::count = 0;
Student::Student() : StudentNo(++count) {}
void Student::Print() const {
    std::cout << "Student" << StudentNo
              << " count=" << count << '\n';
}
