#include<iostream>
using namespace std;

class Shape {
public:
    int length, width;
    
    void getDimensions() {
        cout << "Enter length and width: ";
        cin >> length >> width;
    }
};

class Rectangle : public Shape {
public:
    int area() {
        return length * width;
    }
};

int main() {
    Rectangle rect;
    rect.getDimensions();
    cout << "Area of rectangle: " << rect.area() << endl;
    return 0;
}

