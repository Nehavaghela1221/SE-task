#include <iostream>
using namespace std;

class Person {
private:
    // Private member variables for name, age, and country
    string name;
    int age;
    string country;

public:
    // Member function to set the values of name, age, and country
    void setDetails(string n, int a, string c) {
        name = n;
        age = a;
        country = c;
    }

    // Member function to get and display the values of name, age, and country
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Country: " << country << endl;
    }
};

int main() {
    string name, country;
    int age;

    // Input details from the user
    cout << "Enter name: ";
    getline(cin, name); // Use getline to allow spaces in the name
    cout << "Enter age: ";
    cin >> age;
    cin.ignore(); // To ignore the newline left in the input buffer
    cout << "Enter country: ";
    getline(cin, country);

    // Create an object of the Person class
    Person person;

    // Set the details of the person
    person.setDetails(name, age, country);

    // Display the details of the person
    person.displayDetails();

    return 0;
}

