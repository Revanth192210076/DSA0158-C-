#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, largest;

    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;

    largest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    cout << "The largest number among " << num1 << ", " << num2 << ", and " << num3 << " is: " << largest << endl;

    return 0;
}

