#include<iostream>
using namespace std;

class MaxNumber {
    int a, b;

public:
    void setData(int x, int y) {
        a = x;
        b = y;
    }

    friend int findMax(MaxNumber);

    void display() {
        cout << "a: " << a << ", b: " << b << endl;
    }
};

int findMax(MaxNumber obj) {
    return (obj.a > obj.b) ? obj.a : obj.b;
}

int main() {
    MaxNumber obj;
    obj.setData(30, 50);
    obj.display();
    
    cout << "Maximum: " << findMax(obj) << endl;

    return 0;
}

