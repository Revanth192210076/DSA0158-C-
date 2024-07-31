#include <iostream>
using namespace std;

class CubeCalculator {
private:
    int number;

public:
    // Default constructor
    CubeCalculator() {
       cout<<"This is the Default constructor";
    }

    // Parameterized constructor
    CubeCalculator(int n) {
        number = n;
    }

    // Method to calculate and display cubes
    void displayCubes() {
        for (int i = 1; i <= number; ++i) {
            cout << "Cube of " << i << " is " << i * i * i << endl;
        }
    }
};

int main() {
    int n;

    cout << "Enter an integer: ";
    cin >> n;

    // Create an object of CubeCalculator
    CubeCalculator cubeCalc(n);

    // Call method to display cubes
    cubeCalc.displayCubes();

    return 0;
}

