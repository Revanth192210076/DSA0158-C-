#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;

    if (num1 == num2) {
        cout << "The numbers " << num1 << " and " << num2 << " are equal." << endl;
    } else {
        cout << "The numbers " << num1 << " and " << num2 << " are not equal." << endl;
    }

    return 0;
}

