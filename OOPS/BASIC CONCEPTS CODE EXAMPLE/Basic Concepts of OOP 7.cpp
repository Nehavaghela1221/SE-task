#include <iostream>
using namespace std;

class Rectangle {
private:
    // Private member variables for length and width
    float length;
    float width;

public:
    // Constructor to initialize length and width
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    // Function to calculate the area of the rectangle
    float calculateArea() {
        return length * width; // Area = length * width
    }

    // Function to calculate the perimeter of the rectangle
    float calculatePerimeter() {
        return 2 * (length + width); // Perimeter = 2 * (length + width)
    }

    // Function to display the area and perimeter
    void display() {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << calculateArea() << endl;
        cout << "Perimeter: " << calculatePerimeter() << endl;
    }
};

int main() {
    float length, width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // Create an object of the Rectangle class
    Rectangle rect(length, width);

    // Display the details of the rectangle
    rect.display();

    return 0;
}

