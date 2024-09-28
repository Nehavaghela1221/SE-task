#include <iostream>
using namespace std;

class Calculator {
public:
    // Function to add two numbers
    float add(float a, float b) {
        return a + b;
    }

    // Function to subtract two numbers
    float subtract(float a, float b) {
        return a - b;
    }

    // Function to multiply two numbers
    float multiply(float a, float b) {
        return a * b;
    }

    // Function to divide two numbers
    float divide(float a, float b) {
        if (b != 0) {
            return a / b;
        } else {
            cout << "Error: Division by zero!" << endl;
            return 0; // Return 0 for division by zero
        }
    }
};

int main() {
    Calculator calc;
    float num1, num2;
    int choice;

    cout << "Simple Calculator" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (choice) {
        case 1:
            cout << "Result: " << calc.add(num1, num2) << endl;
            break;
        case 2:
            cout << "Result: " << calc.subtract(num1, num2) << endl;
            break;
        case 3:
            cout << "Result: " << calc.multiply(num1, num2) << endl;
            break;
        case 4:
            cout << "Result: " << calc.divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}

