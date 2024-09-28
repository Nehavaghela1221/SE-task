#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    void setDate(int d, int m, int y) {
        if (d > 0 && d <= 31 && m > 0 && m <= 12 && y > 0) {
            day = d;
            month = m;
            year = y;
        } else {
            cout << "Invalid date!" << endl;
        }
    }

    void getDate() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    Date date;
    date.setDate(25, 9, 2024);
    date.getDate();

    date.setDate(31, 13, 2024); // Invalid date
    return 0;
}

