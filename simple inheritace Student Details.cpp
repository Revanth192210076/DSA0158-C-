#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;
    int age;
public:
    void read() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class UndergraduateStudent : public Student {
private:
    string major;
public:
    void readMajor() {
        read(); 
        cout << "Enter major: ";
        cin >> major;
    }
    void displayDetails() {
        display(); 
        cout << "Major: " << major << endl;
    }
};

int main() {
    UndergraduateStudent ustudent;

    cout << "Enter details of undergraduate student:" << endl;
    ustudent.readMajor();

    cout << "\nDetails of undergraduate student:" << endl;
    ustudent.displayDetails();

    return 0;
}

