#pragma once
#include <string>

class GradeBook {
public:
    static constexpr int studentCount = 10;
    static constexpr int testCount = 3;
    GradeBook(const std::string &name, const int initialGrades[][testCount]);
    void displayMessage() const;
    void processGrades() const;

private:
    std::string courseName;
    int grades[studentCount][testCount]{};

    void outputGrades() const;
    int getMinimum() const;
    int getMaximum() const;
    double getAverage(const int studentGrades[], int count) const;
    void outputBarChart() const;
};
