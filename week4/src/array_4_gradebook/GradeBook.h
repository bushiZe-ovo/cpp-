#pragma once
#include <string>

class GradeBook {
public:
    static constexpr int studentCount = 10;
    GradeBook(const std::string &name, const int initialGrades[]);
    void displayMessage() const;
    void processGrades() const;

private:
    std::string courseName;
    int grades[studentCount]{};

    void outputGrades() const;
    int getMinimum() const;
    int getMaximum() const;
    double getAverage() const;
    void outputBarChart() const;
};
