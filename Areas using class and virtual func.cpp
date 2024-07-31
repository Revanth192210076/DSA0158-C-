#include <iostream>

using namespace std;
class Shape {
public:
    virtual double area() const = 0;
};

class Square : public Shape {
private:
    double s;
public:
    
    Square(double s) : s(s) {}
    
    double area() const override {
        return s * s;
    }
};

class Circle : public Shape {
private:
    double r;
public:
    Circle(double r) : r(r) {}
    
    double area() const override {
        return 3.14 * r * r;
    }
};

int main() {
    double r, s;

    cout << "Enter radius : ";
    cin >> r;
    cout << "Enter the side: ";
    cin >> s;

    Circle circle(r);
    Square square(s);

    cout << "Area of square: " << square.area() << endl;
    cout << "Area of circle: " << circle.area() <<endl;

    return 0;
}
