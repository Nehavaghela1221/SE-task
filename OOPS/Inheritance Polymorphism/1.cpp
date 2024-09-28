#include<iostream>
using namespace std;

class Cricketer {
public:
    string name;
    int age;

    void inputCricketerData() {
        cout << "Enter cricketer's name: ";
        cin >> name;
        cout << "Enter cricketer's age: ";
        cin >> age;
    }

    void displayCricketerData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns, bestPerformance;
    float averageRuns;

public:
    void inputBatsmanData() {
        inputCricketerData();
        cout << "Enter total runs: ";
        cin >> totalRuns;
        cout << "Enter best performance: ";
        cin >> bestPerformance;
        calculateAverage();
    }

    void calculateAverage() {
        averageRuns = static_cast<float>(totalRuns) / 50; // Assuming 50 innings
    }

    void displayBatsmanData() {
        displayCricketerData();
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};

int main() {
    Batsman b;
    b.inputBatsmanData();
    b.displayBatsmanData();
    return 0;
}

