#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    int fact = 1;
    for (int i = 2; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

bool isStrongNumber(int number) {
    int originalNumber = number;
    int sum = 0;

    while (number > 0) {
        int digit = number % 10;
        sum += factorial(digit);
        number /= 10;
    }

    return sum == originalNumber;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isStrongNumber(num)) {
        cout << num << " is a strong number." << endl;
    } else {
        cout << num << " is not a strong number." << endl;
    }

    return 0;
}

