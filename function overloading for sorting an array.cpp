#include <iostream>
#include <algorithm>

using namespace std;

// Function to sort an integer array in ascending order
void sortArray(int arr[], int size) {
    sort(arr, arr + size);
}

// Function to sort a double array in descending order
void sortArray(double arr[], int size) {
    sort(arr, arr + size, greater<double>());
}

int main() {
    int intArr[] = {5, 2, 8, 1, 9};
    int intSize = sizeof(intArr) / sizeof(intArr[0]);

    double doubleArr[] = {3.14, 1.618, 2.718, 0.577};
    int doubleSize = sizeof(doubleArr) / sizeof(doubleArr[0]);

    sortArray(intArr, intSize);
    sortArray(doubleArr, doubleSize);

    cout << "Sorted integer array (ascending): ";
    for (int i = 0; i < intSize; i++) {
        cout << intArr[i] << " ";
    }
    cout << endl;

    cout << "Sorted double array (descending): ";
    for (int i = 0; i < doubleSize; i++) {
        cout << doubleArr[i] << " ";
    }
    cout << endl;

    return 0;
}
