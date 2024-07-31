#include <iostream>
using namespace std;

class Shape {
public:
    virtual void display() {
        cout << "This is a Shape" << endl;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    double calculateArea() {
        return 3.14 * radius * radius;
    }

    void display() override {
        cout << "This is a Circle" << endl;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    double calculateArea() {
        return length * width;
    }

    void display() override {
        cout << "This is a Rectangle" << endl;
    }
};

class Cylinder : public Circle {
private:
    double height;

public:
    Cylinder(double r, double h) : Circle(r) {
        height = h;
    }

    double calculateVolume() {
        return calculateArea() * height;
    }

    void display() override {
        cout << "This is a Cylinder" << endl;
    }
};

int main() {
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);
    Cylinder cylinder(3.0, 7.0);

    circle.display();
    rectangle.display();
    cylinder.display();

    cout << "Area of Circle: " << circle.calculateArea() << endl;
    cout << "Area of Rectangle: " << rectangle.calculateArea() << endl;

    cout << "Volume of Cylinder: " << cylinder.calculateVolume() << endl;

    return 0;
}

