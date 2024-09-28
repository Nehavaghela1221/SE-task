#include<iostream>
using namespace std;

class SwapNumbers {
    int a, b;

public:
    void setData(int x, int y) {
        a = x;
        b = y;
    }

    friend void swap(SwapNumbers&);

    void display() {
        cout << "a: " << a << ", b: " << b << endl;
    }
};

void swap(SwapNumbers& obj) {
    obj.a = obj.a + obj.b;
    obj.b = obj.a - obj.b;
    obj.a = obj.a - obj.b;
}

int main() {
    SwapNumbers obj;
    obj.setData(10, 20);
    cout << "Before swap: ";
    obj.display();

    swap(obj);
    cout << "After swap: ";
    obj.display();
    
    return 0;
}

