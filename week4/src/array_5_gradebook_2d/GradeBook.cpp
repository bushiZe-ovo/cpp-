#include "GradeBook.h"
#include <iomanip>
#include <iostream>
using namespace std;

GradeBook::GradeBook(const string &name, const int initialGrades[][testCount])
    : courseName(name) {
    for (int student = 0; student < studentCount; ++student) {
        for (int test = 0; test < testCount; ++test) {
            grades[student][test] = initialGrades[student][test];
        }
    }
}

void GradeBook::displayMessage() const {
    cout << "Welcome to the grade book for\n" << courseName << "!\n";
}

void GradeBook::processGrades() const {
    outputGrades();
    cout << "\nLowest grade is " << getMinimum()
         << "\nHighest grade is " << getMaximum() << '\n';
    outputBarChart();
}

void GradeBook::outputGrades() const {
    cout << "\nThe grades are:\n";
    cout << "            Test 1  Test 2  Test 3  Average\n";
    for (int student = 0; student < studentCount; ++student) {
        cout << "Student " << setw(2) << student + 1;
        for (int grade : grades[student]) {
            cout << setw(8) << grade;
        }
        cout << setw(9) << fixed << setprecision(2)
             << getAverage(grades[student], testCount) << '\n';
    }
}

int GradeBook::getMinimum() const {
    int lowest = grades[0][0];
    for (const auto &studentGrades : grades) {
        for (int grade : studentGrades) {
            if (grade < lowest) {
                lowest = grade;
            }
        }
    }
    return lowest;
}

int GradeBook::getMaximum() const {
    int highest = grades[0][0];
    for (const auto &studentGrades : grades) {
        for (int grade : studentGrades) {
            if (grade > highest) {
                highest = grade;
            }
        }
    }
    return highest;
}

double GradeBook::getAverage(const int studentGrades[], int count) const {
    int total = 0;
    for (int test = 0; test < count; ++test) {
        total += studentGrades[test];
    }
    return static_cast<double>(total) / count;
}

void GradeBook::outputBarChart() const {
    int frequency[11]{};
    for (const auto &studentGrades : grades) {
        for (int grade : studentGrades) {
            ++frequency[grade / 10];
        }
    }

    cout << "\nOverall grade distribution:\n";
    for (int band = 0; band < 10; ++band) {
        cout << setw(2) << band * 10 << '-' << setw(2) << band * 10 + 9
             << ": " << string(frequency[band], '*') << '\n';
    }
    cout << "  100: " << string(frequency[10], '*') << '\n';
}
