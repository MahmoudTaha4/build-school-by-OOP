#include <bits/stdc++.h>
#include "Student.h"
#include "School.h"
using namespace std;


Student createNewStudent();

int main(){
    // school init
    School nourElMaarefSchool("taha school", "giza", 10, "tamema");

    // students init
    Student ahmed("ahmed", 1000, 20, 10, "011"),
            mahmoud("mahmoud", 1000, 20, 11, "010");

    nourElMaarefSchool.addNewStudent(ahmed);
    nourElMaarefSchool.addNewStudent(mahmoud);


    int option;
    while(true){
        cout << "please select option\n";
        cout << "1- print school info\n";
        cout << "2- print all students info\n";
        cout << "3- add student\n";
        cout << "4- get student info by name and level\n";
        cout << "5- delete student from school by name and level\n";
        cout << "6- get max student score for each level\n";
        cout << "7- get total students grades\n";
        cout << "8- get number of classes\n";
        cout << "9- add new classes\n";
        cout << "10- exit\n";
        cout << ">> ";
        cin >> option;


        if(option == 1){
            nourElMaarefSchool.printSchoolInfo();
        }


        else if (option == 2){
            nourElMaarefSchool.printAllStudentsInfo();
        }


        else if(option == 3){
            Student newStudent = createNewStudent();
            nourElMaarefSchool.addNewStudent(newStudent);
        }


        else if(option == 4){
            string name;
            int level;
            cout << "please enter the name: ";
            cin.ignore(1,'\n');
            getline(cin, name);   // TODO solve this issue
            cout << "please enter the level: ";
            cin >> level;
            Student student = nourElMaarefSchool.getStudentByNameAndLevel(name, level);
            student.printStudentInfo();
        }


        else if (option == 5){
            string name;
            int level;
            cout << "please enter the name: ";
            cin.ignore(1,'\n');
            getline(cin, name);   // TODO solve this issue
            cout << "please enter the level: ";
            cin >> level;
            nourElMaarefSchool.removeStudentByNameAndLevel(name,level);
        }


        else if (option == 6) {
            nourElMaarefSchool.printMaxScoreForEachLevel();
        }


        else if (option == 7){
            nourElMaarefSchool.printTotalGradeForAllStudents();
        }


        else if (option == 8){
            int numOfClasses = nourElMaarefSchool.getNumOfClasses();
            cout << "num of classes :" << numOfClasses << endl << endl;
        }


        else if (option == 9){
            int currNum;
            cout << "please enter num of classes that you want to add :";
            cin >> currNum;
            nourElMaarefSchool.addNewClasses(currNum);
        }


        else {
            break;
        }
    }
}


Student createNewStudent(){
    Student newStudent;
    cout << "please enter new student name's :";
    cin.ignore(1,'\n');
    getline(cin,newStudent.name);
    cout << "please enter new student age's :";
    cin >> newStudent.age;
    cout << "please enter new student level's :";
    cin >> newStudent.currLevel;
    cout << endl;
    newStudent.totalGrade = 100;
    return newStudent;
}