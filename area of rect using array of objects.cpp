#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l = 0.0, double w = 0.0) {
        length = l;
        width = w;
    }

    double calculateArea() {
        return length * width;
    }

    void setLength(double l) {
        length = l;
    }

    void setWidth(double w) {
        width = w;
    }
};

int main() {
    const int numRectangles = 3;  
    Rectangle rectangles[numRectangles]; 

    for (int i = 0; i < numRectangles; ++i) {
        double l, w;
        cout << "Enter length and width for rectangle " << (i + 1) << ": ";
        cin >> l >> w;
        rectangles[i].setLength(l);
        rectangles[i].setWidth(w);
    }

    cout << "\nAreas of the rectangles:" << endl;
    for (int i = 0; i < numRectangles; ++i) {
        double area = rectangles[i].calculateArea();
        cout << "Rectangle " << (i + 1) << ": Area = " << area << endl;
    }

    return 0;
}

