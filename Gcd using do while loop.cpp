#include <iostream>
using namespace std;

int main() {
    int a, b, temp;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    do {
        if (a < b) {
            temp = a;
            a = b;
            b = temp;
        }

        a = a - b;
    } while (a != 0);

    cout << "GCD: " << b << endl;

    return 0;
}
