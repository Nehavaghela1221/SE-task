#include <iostream>
using namespace std;

class Math {
public:
    inline int multiply(int a, int b) {
        return a * b;
    }

    inline int cube(int x) {
        return x * x * x;
    }
};

int main() {
    Math math;
    int num1 = 3, num2 = 4;
    cout << "Multiplication of " << num1 << " and " << num2 << ": " << math.multiply(num1, num2) << endl;
    cout << "Cube of " << num1 << ": " << math.cube(num1) << endl;
    return 0;
}

