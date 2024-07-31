#include <iostream>
using namespace std;

class Shape {
public:
    virtual void getData() = 0;
    virtual void displayData() const = 0;
    virtual double area() const = 0;
};

class Rectangle : public Shape {
protected:
    double length;
    double width;
public:
    void getData() override {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
    }

    void displayData() const override {
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
    }

    double area() const override {
        return length * width;
    }
};

class Cuboid : public Rectangle {
private:
    double height;
public:
    void getData() override {
        Rectangle::getData();
        cout << "Enter height: ";
        cin >> height;
    }

    void displayData() const override {
        Rectangle::displayData();
        cout << "Height: " << height <<endl;
    }

    double volume() const {
        return length * width * height;
    }

    double surfaceArea() const {
        return 2 * (length * width + width * height + height * length);
    }
};

int main() {
    Cuboid cuboid;

    cuboid.getData();
    cout << "Cuboid details:" <<endl;
    cuboid.displayData();
    cout << "Surface Area: " << cuboid.surfaceArea() << endl;
    cout << "Volume: " << cuboid.volume() << endl;

    return 0;
}
