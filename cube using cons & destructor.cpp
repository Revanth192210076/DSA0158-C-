#include <iostream>
using namespace std;

class CubeCalculator {
private:
    int number;

public:
    
    CubeCalculator(int n) {
        number = n;
    }

   
    ~CubeCalculator() {
        cout << "Destructor called. Object destroyed." << endl;
    }

   
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

    
    CubeCalculator cubeCalc(n);

   
    cubeCalc.displayCubes();

    return 0;
}

