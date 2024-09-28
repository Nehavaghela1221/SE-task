#include<iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    void getPersonData() {
        cout << "Enter name and age: ";
        cin >> name >> age;
    }

    void displayPersonData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
public:
    float percentage;

    void getStudentData() {
        getPersonData();
        cout << "Enter percentage: ";
        cin >> percentage;
    }

    void displayStudentData() {
        displayPersonData();
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

class Teacher : public Person {
public:
    float salary;

    void getTeacherData() {
        getPersonData();
        cout << "Enter salary: ";
        cin >> salary;
    }

    void displayTeacherData() {
        displayPersonData();
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Student s;
    Teacher t;
    
    s.getStudentData();
    t.getTeacherData();
    
    cout << "\nStudent Data:" << endl;
    s.displayStudentData();
    
    cout << "\nTeacher Data:" << endl;
    t.displayTeacherData();

    return 0;
}

