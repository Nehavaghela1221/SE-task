#include<iostream>
using namespace std;

class MathOperations {
public:
    // Addition
    int operation(int a, int b) {
        return a + b;
    }

    // Subtraction
    int operation(int a, int b, char op) {
        return a - b;
    }

    // Multiplication
    double operation(double a, double b) {
        return a * b;
    }

    // Division
    float operation(float a, float b) {
        return a / b;
    }
};

int main() {
    MathOperations math;

    cout << "Addition: " << math.operation(5, 3) << endl;
    cout << "Subtraction: " << math.operation(5, 3, '-') << endl;
    cout << "Multiplication: " << math.operation(5.5, 3.2) << endl;
    cout << "Division: " << math.operation(10.0f, 2.0f) << endl;

    return 0;
}

