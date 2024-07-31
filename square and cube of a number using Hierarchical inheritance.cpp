#include <iostream>
using namespace std;

class Number {
protected:
    int num;

public:
    void setNumber(int n) {
        num = n;
    }
};

class Square : public Number {
public:
    int calculateSquare() {
        return num * num;
    }
};

class Cube : public Number {
public:
    int calculateCube() {
        return num * num * num;
    }
};

int main() {
    Square squareObj;
    Cube cubeObj;
    int number;

    cout << "Enter a number: ";
    cin >> number;

    squareObj.setNumber(number);
    int square = squareObj.calculateSquare();
    cout << "Square of " << number << " is: " << square << endl;

    cubeObj.setNumber(number);
    int cube = cubeObj.calculateCube();
    cout << "Cube of " << number << " is: " << cube << endl;

    return 0;
}

