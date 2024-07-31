#include <iostream>
using namespace std;

class Base {
private:
    int privateData;

public:
    Base() {
        privateData = 0;
        cout << "Base class constructor called" << endl;
    }

    void setPrivateData(int value) {
        privateData = value;
    }

    int getPrivateData() const {
        return privateData;
    }
};

class Derived : private Base {
public:
    Derived() {
        cout << "Derived class constructor called" << endl;
    }

    void setBaseData(int value) {
        setPrivateData(value);
    }

    int getBaseData() const {
        return getPrivateData();
    }
};

int main() {
    Derived derivedObj;

    derivedObj.setBaseData(42);
    cout << "Data from base class accessed through derived class: " << derivedObj.getBaseData() <<endl;


    return 0;
}

