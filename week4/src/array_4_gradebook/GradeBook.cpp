#include "GradeBook.h"
#include <iomanip>
#include <iostream>
using namespace std;

GradeBook::GradeBook(const string &name, const int initialGrades[])
    : courseName(name) {
    for (int student = 0; student < studentCount; ++student) {
        grades[student] = initialGrades[student];
    }
}

void GradeBook::displayMessage() const {
    cout << "Welcome to the grade book for\n" << courseName << "!\n";
}

void GradeBook::processGrades() const {
    outputGrades();
    cout << fixed << setprecision(2)
         << "\nClass average is " << getAverage()
         << "\nLowest grade is " << getMinimum()
         << "\nHighest grade is " << getMaximum() << '\n';
    outputBarChart();
}

void GradeBook::outputGrades() const {
    cout << "\nThe grades are:\n";
    for (int student = 0; student < studentCount; ++student) {
        cout << "Student " << setw(2) << student + 1 << ": "
             << setw(3) << grades[student] << '\n';
    }
}

int GradeBook::getMinimum() const {
    int lowest = grades[0];
    for (int grade : grades) {
        if (grade < lowest) {
            lowest = grade;
        }
    }
    return lowest;
}

int GradeBook::getMaximum() const {
    int highest = grades[0];
    for (int grade : grades) {
        if (grade > highest) {
            highest = grade;
        }
    }
    return highest;
}

double GradeBook::getAverage() const {
    int total = 0;
    for (int grade : grades) {
        total += grade;
    }
    return static_cast<double>(total) / studentCount;
}

void GradeBook::outputBarChart() const {
    // 课件成绩均为 0～100，最后一档单独统计 100 分。
    int frequency[11]{};
    for (int grade : grades) {
        ++frequency[grade / 10];
    }

    cout << "\nGrade distribution:\n";
    for (int band = 0; band < 10; ++band) {
        cout << setw(2) << band * 10 << '-' << setw(2) << band * 10 + 9
             << ": " << string(frequency[band], '*') << '\n';
    }
    cout << "  100: " << string(frequency[10], '*') << '\n';
}
