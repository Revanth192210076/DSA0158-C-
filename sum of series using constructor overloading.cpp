#include <iostream>
using namespace std;

class SeriesSum {
private:
    int n;

public:
    // Default constructor
    SeriesSum() {
        n = 0;
    }

    // Parameterized constructor #1
    SeriesSum(int num) {
        n = num;
    }

    // Method to calculate sum of first n natural numbers
    int sumOfFirstN() {
        int sum = 0;
        for (int i = 1; i <= n; ++i) {
            sum += i;
        }
        return sum;
    }
};

int main() {
    int num;

    cout << "Enter a positive integer: ";
    cin >> num;

    // Create an object of SeriesSum with num
    SeriesSum series(num);

    // Calculate and display sum of first n natural numbers
    int sumN = series.sumOfFirstN();
    cout << "Sum of first " << num << " natural numbers: " << sumN << endl;

    return 0;
}

