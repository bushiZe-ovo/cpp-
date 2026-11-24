#include "GradeBook.h"
using namespace std;

int main() {
    const int grades[GradeBook::studentCount]{
        87, 68, 94, 100, 83, 78, 85, 91, 76, 87
    };
    GradeBook book("CS101 Introduction to C++ Programming", grades);
    book.displayMessage();
    book.processGrades();
}
