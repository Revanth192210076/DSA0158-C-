#include <iostream>
#include <cmath>

class Shape {
public:
    // Base class Shape with virtual function for area calculation
    virtual double area() const = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    // Constructor to initialize Circle with radius
    Circle(double r) : radius(r) {}

    // Override area function to calculate area of Circle
    double area() const override {
        return M_PI * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    // Constructor to initialize Rectangle with length and width
    Rectangle(double l, double w) : length(l), width(w) {}

    // Override area function to calculate area of Rectangle
    double area() const override {
        return length * width;
    }
};

class Triangle : public Shape {
private:
    double base;
    double height;

public:
    // Constructor to initialize Triangle with base and height
    Triangle(double b, double h) : base(b), height(h) {}

    // Override area function to calculate area of Triangle
    double area() const override {
        return 0.5 * base * height;
    }
};

int main() {
    // Example usage of the classes
    Circle circle(3.0);
    Rectangle rectangle(4.0, 5.0);
    Triangle triangle(6.0, 7.0);

    // Calculating and displaying area of each shape
    std::cout << "Area of Circle: " << circle.area() << std::endl;
    std::cout << "Area of Rectangle: " << rectangle.area() << std::endl;
    std::cout << "Area of Triangle: " << triangle.area() << std::endl;

    return 0;
}

