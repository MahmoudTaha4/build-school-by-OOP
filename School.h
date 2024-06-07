#ifndef SCHOOL_SCHOOL_H
#define SCHOOL_SCHOOL_H
#include <bits\stdc++.h>
#include "Student.h"
using namespace std;

struct School {
    string name;
    string government;
    int numOfClasses;
    string nameOfManager;
    vector<Student> students;

    School();
    School(string name, string government, int numOfClasses, string nameOfManager);

    void addNewStudent(Student newStudent);
    void printSchoolInfo();
    void printAllStudentsInfo();
    void printMaxScoreForEachLevel();
    void printTotalGradeForAllStudents();
    Student getStudentByNameAndLevel(string name, int level);
    void removeStudentByNameAndLevel(string name, int level);
    int getNumOfClasses();
    void addNewClasses(int currNum);
};


#endif
