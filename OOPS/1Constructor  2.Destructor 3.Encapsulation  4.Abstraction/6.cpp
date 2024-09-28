#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    Employee(string n, int id) : name(n), employeeID(id), salary(0) {}

    void setSalary(double performance) {
        if (performance >= 90) {
            salary = 50000;
        } else if (performance >= 75) {
            salary = 40000;
        } else {
            salary = 30000;
        }
    }

    void display() {
        cout << "Name: " << name << ", Employee ID: " << employeeID << ", Salary: " << salary << endl;
    }
};

int main() {
    Employee emp("John Doe", 123);
    emp.setSalary(85);
    emp.display();
    return 0;
}

