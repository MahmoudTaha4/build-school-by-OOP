#include "School.h"

School::School() {
    numOfClasses = 0;
}

School::School(std::string name, std::string government, int numOfClasses, std::string nameOfManager) {
    this->name = name;
    this->government = government;
    this->numOfClasses = numOfClasses;
    this->nameOfManager = nameOfManager;
}

void School::addNewStudent(Student newStudent){
    this->students.push_back(newStudent);
}

void School::printSchoolInfo(){
    cout << "shcool's name :" << this->name << endl;
    cout << "government of school :" << this->government << endl;
    cout << "num of classes in school's :" << this->numOfClasses << endl;
    cout << "name of school manager's :" << this->nameOfManager << endl;
    cout << "num of school students's :" << this->students.size() << endl << endl;
}

void School::printAllStudentsInfo(){
    for(int i = 0; i < this->students.size(); i++){
        this->students[i].printStudentInfo();
        cout << "================================\n";
    }
}

void School::printMaxScoreForEachLevel(){
    for(int i = 1; i <= 15; i++){
        Student currStudent;
        for(int j = 0; j < this->students.size(); j++){
            if(students[j].currLevel == i && currStudent.totalGrade < students[j].totalGrade){
                currStudent = students[j];
            }
        }
        if(currStudent.totalGrade != -1){
            cout << "max score for level " << i << " is\n";
            currStudent.printStudentInfo();
        }
    }
}

void School::printTotalGradeForAllStudents(){
    long long sumOfTotalGrades = 0;
    for(int i = 0; i < this->students.size(); i++){
        sumOfTotalGrades += this->students[i].totalGrade;
    }
    cout << "sum of total grades is: " << sumOfTotalGrades << '\n';
}

Student School::getStudentByNameAndLevel(string name, int level){
    for(int i = 0; i < this->students.size(); i++){
        if(this->students[i].name == name && this->students[i].currLevel == level){
            return this->students[i];
        }
    }
    return {};
}

void School::removeStudentByNameAndLevel(string name, int level){
    for (int i = 0; i < this->students.size();i++){
        if (name == this->students[i].name && level == this->students[i].currLevel){
            this->students.erase(this->students.begin() + i);
            cout << name << " is deleted" << endl << endl;
            return;
        }
    }
    cout << name << " Not Found" << endl;
}

int School::getNumOfClasses(){
    return this->numOfClasses;
}

void School::addNewClasses(int currNum){
    this->numOfClasses += currNum;
    cout << "new classes added" << endl;
}