#include <iostream>
using namespace std;

class Box {
private:
    double length;
    double width;
    double height;

public:
    Box(double l = 0.0, double w = 0.0, double h = 0.0) {
        this->length = l;
        this->width = w;
        this->height = h;
    }

    double calculateVolume() {
        return this->length * this->width * this->height;
    }

    bool isSmallerThan(Box &otherBox) {
        double thisVolume = this->calculateVolume();
        double otherVolume = otherBox.calculateVolume();

        return thisVolume < otherVolume;
    }
};

int main() {
    Box box1(3.0, 4.0, 5.0);
    Box box2(1.0, 2.0, 3.0);

    if (box1.isSmallerThan(box2)) {
        cout << "Box 1 is smaller than Box 2" << endl;
    } else {
        cout << "Box 1 is not smaller than Box 2" << endl;
    }

    return 0;
}

