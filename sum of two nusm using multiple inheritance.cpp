#include <iostream>
using namespace std;

class Number1 {
protected:
    int num1;

public:
    void setNumber1(int n) {
        num1 = n;
    }
};

class Number2 {
protected:
    int num2;

public:
    void setNumber2(int n) {
        num2 = n;
    }
};

class SumCalculator : public Number1, public Number2 {
public:
    int calculateSum() {
        return num1 + num2;
    }
};

int main() {
    SumCalculator calc;

    calc.setNumber1(10);
    calc.setNumber2(20);

    int sum = calc.calculateSum();
    cout << "Sum of num1 and num2: " << sum << endl;

    return 0;
}

