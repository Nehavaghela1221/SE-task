#include <iostream>
using namespace std;

template <typename T>
void sortArray(T arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

template <typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int intArray[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(intArray) / sizeof(intArray[0]);
    cout << "Before sorting: ";
    printArray(intArray, size);
    sortArray(intArray, size);
    cout << "After sorting: ";
    printArray(intArray, size);

    double doubleArray[] = {2.5, 1.2, 4.6, 3.9};
    int size2 = sizeof(doubleArray) / sizeof(doubleArray[0]);
    cout << "Before sorting: ";
    printArray(doubleArray, size2);
    sortArray(doubleArray, size2);
    cout << "After sorting: ";
    printArray(doubleArray, size2);

    return 0;
}

