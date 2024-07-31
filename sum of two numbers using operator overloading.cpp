#include <iostream>

class Add {
private:
    int num1;
    int num2;

public:
    // Constructor to initialize num1 and num2
    Add(int n1, int n2) : num1(n1), num2(n2) {}

    // Overloading the + operator to perform addition
    Add operator+(const Add& other) {
        int sumNum1 = num1 + other.num1;
        int sumNum2 = num2 + other.num2;
        return Add(sumNum1, sumNum2);
    }

    // Method to display the sum
    void displaySum() {
        std::cout << "sum: " << num1 + num2 << std::endl;
    }
};

int main() {
    int a, b;
    
    // Taking input from user
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    // Creating objects of class Add
    Add obj1(a, b);
    Add obj2(10, 5);

    // Using operator overloading to add two objects
    Add result = obj1 + obj2;

    // Displaying the result
    result.displaySum();

    return 0;
}


