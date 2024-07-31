#include <iostream>

using namespace std;

int main() {
    int num, temp, digit, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    while (temp > 0) {
        digit = temp % 10;
        sum += digit;
        temp /= 10;
    }

    if (num % sum == 0) {
        cout << num << " is a Harshad number." << endl;
    } else {
        cout << num << " is not a Harshad number." << endl;
    }

    return 0;
}				
