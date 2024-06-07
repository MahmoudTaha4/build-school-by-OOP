#include "Student.h"

Student::Student() {
    totalGrade = -1;
    age = 0;
    currLevel = 0;
}

Student::Student(std::string name, int totalGrade, int age, int currLevel, std::string phoneNumber) {
    this->name = name;
    this->totalGrade = totalGrade;
    this->age = age;
    this->currLevel = currLevel;
    this->phoneNumber = phoneNumber;
}

void Student::printStudentInfo() {
    if (totalGrade != -1){
        cout << "name: " << this->name << '\n';
        cout << "total grade: " << this->totalGrade << '\n';
        cout << "age: " << this->age << '\n';
        cout << "phone number: " << this->phoneNumber << '\n';
    }
    else {
        cout << "Not found" << endl;
    }
}