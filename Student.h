#ifndef SCHOOL_STUDENT_H
#define SCHOOL_STUDENT_H
#include <iostream>
using namespace std;

struct Student {
    string name;
    int totalGrade;
    int age;
    int currLevel;
    string phoneNumber;

    Student();
    Student(string name, int totalGrade, int age, int currLevel, string phoneNumber);

    void printStudentInfo();
};

#endif
