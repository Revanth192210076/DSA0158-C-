#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int age;

public:
	cout<<"Enter name:";
	cin>>str;
	
    Student(string name, int age) {
        this->name = name;
        this->age = age;
    }

    void displayDetails() {
        cout << "Name: " << this->name << endl;
        cout << "Age: " << this->age << endl;
    }
};

int main() {
    Student* ptrStudent = new Student("John Doe", 20);

    ptrStudent->displayDetails();

    delete ptrStudent;

    return 0;
}

