#include <iostream>
using namespace std;

class Calculator {
    int a, b;
public:
    Calculator(int x, int y) : a(x), b(y) {}

    void add() {
        cout << "Addition: " << a + b << endl;
    }

    void subtract() {
        cout << "Subtraction: " << a - b << endl;
    }

    void multiply() {
        cout << "Multiplication: " << a * b << endl;
    }

    void divide() {
        if (b != 0)
            cout << "Division: " << a / b << endl;
        else
            cout << "Division by zero error!" << endl;
    }
};

int main() {
    Calculator calc(10, 5);
    calc.add();
    calc.subtract();
    calc.multiply();
    calc.divide();
    return 0;
}

