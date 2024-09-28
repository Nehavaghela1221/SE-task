#include <iostream>
using namespace std;

class Circle {
private:
    // Private data member for radius
    float radius;

public:
    // Constructor to initialize the radius
    Circle(float r) {
        radius = r;
    }

    // Function to calculate and return the area of the circle
    float calculateArea() {
        return 3.14159 * radius * radius; // Area = p * r²
    }

    // Function to calculate and return the circumference of the circle
    float calculateCircumference() {
        return 2 * 3.14159 * radius; // Circumference = 2 * p * r
    }

    // Function to display the radius, area, and circumference
    void display() {
        cout << "Radius of the circle: " << radius << endl;
        cout << "Area of the circle: " << calculateArea() << endl;
        cout << "Circumference of the circle: " << calculateCircumference() << endl;
    }
};

int main() {
    float r;
    cout << "Enter the radius of the circle: ";
    cin >> r;

    // Create an object of Circle class
    Circle circle(r);

    // Display the details of the circle
    circle.display();

    return 0;
}

