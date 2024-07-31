#include <iostream>
#include <cmath>

const double PI = 3.14159265358979323846;

class Shape {
public:
    // Base class Shape with virtual function for volume calculation
    virtual double volume() const = 0;
};

class Cube : public Shape {
private:
    double side;

public:
    // Constructor to initialize Cube with side length
    Cube(double s) : side(s) {}

    // Override volume function to calculate volume of Cube
    double volume() const override {
        return side * side * side;
    }
};

class Cylinder : public Shape {
private:
    double radius;
    double height;

public:
    // Constructor to initialize Cylinder with radius and height
    Cylinder(double r, double h) : radius(r), height(h) {}

    // Override volume function to calculate volume of Cylinder
    double volume() const override {
        return PI * radius * radius * height;
    }
};

int main() {
    // Example usage of the classes
    Cube cube(3.0);
    Cylinder cylinder(2.0, 4.0);

    // Calculating and displaying volume of each shape
    std::cout << "Volume of Cube: " << cube.volume() << std::endl;
    std::cout << "Volume of Cylinder: " << cylinder.volume() << std::endl;

    return 0;
}

