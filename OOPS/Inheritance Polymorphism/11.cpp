#include<iostream>
using namespace std;

class Area {
public:
    // Rectangle area
    double calculateArea(double length, double breadth) {
        return length * breadth;
    }

    // Triangle area
    double calculateArea(double base, double height, char type) {
        return 0.5 * base * height;
    }

    // Circle area
    double calculateArea(double radius) {
        const double PI = 3.14159;
        return PI * radius * radius;
    }
};

int main() {
    Area area;
    
    cout << "Area of Rectangle: " << area.calculateArea(5.0, 3.0) << endl;
    cout << "Area of Triangle: " << area.calculateArea(5.0, 4.0, 't') << endl;
    cout << "Area of Circle: " << area.calculateArea(3.0) << endl;

    return 0;
}

