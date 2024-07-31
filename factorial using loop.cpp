#include <iostream>
using namespace std;

int main() {
    int number;
    int factorial = 1;

    cout << "Enter a non-negative integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Error! Factorial of a negative number doesn't exist." << endl;
    } else {
        for (int i = 1; i <= number; ++i) {
            factorial *= i;
        }

        cout << "Factorial of " << number << " = " << factorial << endl;
    }

    return 0;
}

