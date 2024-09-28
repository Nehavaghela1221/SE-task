#include<iostream>
using namespace std;

class Base {
private:
    int privateData;

protected:
    int protectedData;

public:
    int publicData;

    Base() {
        privateData = 10;
        protectedData = 20;
        publicData = 30;
    }

    void displayBaseData() {
        cout << "Private Data: " << privateData << endl;
        cout << "Protected Data: " << protectedData << endl;
        cout << "Public Data: " << publicData << endl;
    }
};

class Derived : public Base {
public:
    void displayDerivedData() {
        // cout << "Private Data: " << privateData << endl; // Not accessible
        cout << "Protected Data: " << protectedData << endl;
        cout << "Public Data: " << publicData << endl;
    }
};

int main() {
    Derived d;
    d.displayBaseData();
    d.displayDerivedData();
    return 0;
}

