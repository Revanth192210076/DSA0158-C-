#include <iostream>

class FloydTriangle {
private:
    int rows;

public:
    // Constructor to initialize the number of rows
    FloydTriangle(int r) : rows(r) {}

    // Destructor (not essential for this example, included for demonstration)
    ~FloydTriangle() {
        std::cout << "FloydTriangle object is destroyed." << std::endl;
    }

    // Method to print Floyd's Triangle
    void printTriangle() {
        int number = 1;
        for (int i = 1; i <= rows; ++i) {
            for (int j = 1; j <= i; ++j) {
                std::cout << number << " ";
                ++number;
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    int n;

    // Taking input from the user
    std::cout << "Enter number of rows for Floyd's Triangle: ";
    std::cin >> n;

    // Creating object of FloydTriangle
    FloydTriangle ft(n);

    // Printing Floyd's Triangle
    ft.printTriangle();

    return 0;
}

