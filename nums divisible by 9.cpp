#include <iostream>

class DivisibleByNine {
private:
    int count;
    int sum;

public:
    // Constructor to initialize count and sum
    DivisibleByNine() : count(0), sum(0) {}

    // Destructor (included for demonstration)
    ~DivisibleByNine() {
        std::cout << "DivisibleByNine object is destroyed." << std::endl;
    }

    // Method to find and calculate numbers divisible by 9
    void findDivisibleNumbers() {
        for (int i = 100; i <= 200; ++i) {
            if (i % 9 == 0) {
                count++;
                sum += i;
            }
        }
    }

    // Method to display count and sum
    void displayResults() {
        std::cout << "Numbers divisible by 9 between 100 and 200: " << count << std::endl;
        std::cout << "Sum of numbers divisible by 9: " << sum << std::endl;
    }
};

int main() {
    // Create object of DivisibleByNine class
    DivisibleByNine obj;

    // Calculate numbers and sum of numbers divisible by 9
    obj.findDivisibleNumbers();

    // Display results
    obj.displayResults();

    return 0;
}

