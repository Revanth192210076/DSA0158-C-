#include <iostream>
using namespace std;

class Point {
private:
    int x;
    int y;

public:
    Point(int x = 0, int y = 0) {
        this->x = x;
        this->y = y;
    }

    void display() {
        cout << "Point coordinates: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point pointObj(5, 10);

    Point *ptrPoint;

    ptrPoint = &pointObj;

    ptrPoint->display();

    return 0;
}

