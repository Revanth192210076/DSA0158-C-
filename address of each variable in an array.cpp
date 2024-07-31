#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int arr[SIZE] = {10, 20, 30, 40, 50};

    cout << "Array elements and their addresses:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << "Element at index " << i << ": ";
        cout << "Value = " << arr[i] << ", Address = " << &arr[i] << endl;
    }

    return 0;
}

