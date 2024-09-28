#include<iostream>
using namespace std;

class Matrix {
    int arr[5];
public:
    void input() {
        cout << "Enter 5 elements: ";
        for (int i = 0; i < 5; i++) {
            cin >> arr[i];
        }
    }

    Matrix operator+(const Matrix& m) {
        Matrix result;
        for (int i = 0; i < 5; i++) {
            result.arr[i] = this->arr[i] + m.arr[i];
        }
        return result;
    }

    void display() {
        for (int i = 0; i < 5; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Matrix m1, m2, m3;
    m1.input();
    m2.input();
    m3 = m1 + m2;
    cout << "Result of matrix addition: ";
    m3.display();
    return 0;
}
#include<iostream>
using namespace std;

class Matrix {
    int arr[5];
public:
    void input() {
        cout << "Enter 5 elements: ";
        for (int i = 0; i < 5; i++) {
            cin >> arr[i];
        }
    }

    Matrix operator+(const Matrix& m) {
        Matrix result;
        for (int i = 0; i < 5; i++) {
            result.arr[i] = this->arr[i] + m.arr[i];
        }
        return result;
    }

    void display() {
        for (int i = 0; i < 5; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Matrix m1, m2, m3;
    m1.input();
    m2.input();
    m3 = m1 + m2;
    cout << "Result of matrix addition: ";
    m3.display();
    return 0;
}

