#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
    std::string name;
    int scores[5];
    int scoreCount;

public:
    // TODO: default constructor — name = "Unknown", no scores
    // Student() { ... }

    // TODO: named constructor — no scores yet
    // Student(std::string n) { ... }

    // TODO: add a score — false if invalid range OR already 5 scores stored
    // bool addScore(int score) { ... }

    // TODO: statistics — document your zero-scores behavior in a comment
    // double getAverage() const { ... }
    // int getHighest() const { ... }
    // int getLowest() const { ... }
    // char getLetterGrade() const { ... }

    // TODO: getters
    // std::string getName() const { ... }
    // int getScoreCount() const { ... }
};

#endif
