#include<iostream>
using namespace std;

class A {
public:
    A() {
        cout << "Constructor of A called" << endl;
    }
};

class B : public A {
public:
    B() {
        cout << "Constructor of B called" << endl;
    }
};

class C : public B {
public:
    C() {
        cout << "Constructor of C called" << endl;
    }
};

int main() {
    C obj;
    return 0;
}

