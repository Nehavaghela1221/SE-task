#include <iostream>
using namespace std;

class Address {
public:
    string street;
    string city;

    Address(string s, string c) : street(s), city(c) {}
};

class Student {
private:
    string name;
    string studentClass;
    int rollNumber;
    double marks;
    Address *address;

public:
    Student(string n, string c, int roll, double m, Address *addr) : name(n), studentClass(c), rollNumber(roll), marks(m), address(addr) {}

    char calculateGrade() {
        if (marks >= 90) return 'A';
        else if (marks >= 75) return 'B';
        else if (marks >= 50) return 'C';
        else return 'D';
    }

    void display() {
        cout << "Name: " << name << ", Class: " << studentClass << ", Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << ", Grade: " << calculateGrade() << endl;
        cout << "Address: " << address->street << ", " << address->city << endl;
    }
};

int main() {
    Address addr("123 Street", "Cityville");
    Student student("Alice", "10th", 101, 85.5, &addr);
    student.display();
    return 0;
}

