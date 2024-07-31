#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int age;
    double salary;

public:
    Employee() {}

    Employee(string n, int a, double s) {
        name = n;
        age = a;
        salary = s;
    }

    void inputDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter salary: ";
        cin >> salary;
    }

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    const int numEmployees = 3; 
    Employee employees[numEmployees]; 

    cout << "Enter details for " << numEmployees << " employees:" << endl;
    for (int i = 0; i < numEmployees; ++i) {
        cout << "Employee " << (i + 1) << ":" << endl;
        employees[i].inputDetails();
        cout << endl;
    }

    cout << "\nDisplaying details of employees:" << endl;
    for (int i = 0; i < numEmployees; ++i) {
        cout << "Employee " << (i + 1) << ":" << endl;
        employees[i].displayDetails();
        cout << endl;
    }

    return 0;
}

