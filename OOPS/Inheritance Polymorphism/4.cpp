#include<iostream>
using namespace std;

class Academic {
public:
    int rollNo;
    void getAcademicData() {
        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void displayAcademicData() {
        cout << "Roll No: " << rollNo << endl;
    }
};

class Sports {
public:
    int sportsMarks;

    void getSportsData() {
        cout << "Enter sports marks: ";
        cin >> sportsMarks;
    }

    void displaySportsData() {
        cout << "Sports Marks: " << sportsMarks << endl;
    }
};

class Student : public Academic, public Sports {
public:
    int academicMarks;

    void getStudentData() {
        getAcademicData();
        getSportsData();
        cout << "Enter academic marks: ";
        cin >> academicMarks;
    }

    void displayStudentData() {
        displayAcademicData();
        cout << "Academic Marks: " << academicMarks << endl;
        displaySportsData();
        cout << "Total Marks: " << academicMarks + sportsMarks << endl;
    }
};

int main() {
    Student s;
    s.getStudentData();
    cout << "\nMarksheet:" << endl;
    s.displayStudentData();
    return 0;
}

