#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    double num;
    int rounded_down, rounded_up;

    cout << "Enter a floating-point number: ";
    cin >> num;

    rounded_down = floor(num); 
    rounded_up = ceil(num);   

    cout << "Original number: " << num << endl;
    cout << "Rounded down using floor(): " << rounded_down << endl;
    cout << "Rounded up using ceil(): " << rounded_up << endl;

    return 0;
}

