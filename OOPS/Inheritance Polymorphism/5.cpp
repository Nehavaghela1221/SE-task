#include<iostream>
using namespace std;

class Student {
public:
    int rollNo;

    void getRollNumber() {
        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void displayRollNumber() {
        cout << "Roll Number: " << rollNo << endl;
    }
};

class Test : public Student {
public:
    int subject1, subject2;

    void getMarks() {
        cout << "Enter marks for two subjects: ";
        cin >> subject1 >> subject2;
    }

    void displayMarks() {
        cout << "Marks - Subject 1: " << subject1 << " Subject 2: " << subject2 << endl;
    }
};

class Result : public Test {
public:
    void displayResult() {
        displayRollNumber();
        displayMarks();
        cout << "Total Marks: " << (subject1 + subject2) << endl;
    }
};

int main() {
    Result r;
    r.getRollNumber();
    r.getMarks();
    r.displayResult();
    return 0;
}

