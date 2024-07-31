#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    
    cout << "Enter first integer: ";
    cin >> num1;
    cout << "Enter second integer: ";
    cin >> num2;
    
    int addition = num1 + num2;
    cout << "Addition: " << num1 << " + " << num2 << " = " << addition << endl;
    
    int subtraction = num1 - num2;
    cout << "Subtraction: " << num1 << " - " << num2 << " = " << subtraction << endl;
    
    int multiplication = num1 * num2;
    cout << "Multiplication: " << num1 << " * " << num2 << " = " << multiplication << endl;
    
    if (num2 != 0) {
        int division = num1 / num2;
        cout << "Division: " << num1 << " / " << num2 << " = " << division << endl;
    } else {
        cout << "Division: Cannot divide by zero!" << endl;
    }
    
    if (num2 != 0) {
        int modulo = num1 % num2;
        cout << "Modulo: " << num1 << " % " << num2 << " = " << modulo << endl;
    } else {
        cout << "Modulo: Cannot compute modulo with zero!" << endl;
    }
    
    return 0;
}

