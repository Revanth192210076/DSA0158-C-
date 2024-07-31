#include <iostream>
using namespace std;

class Series {
private:
    int number;

public:
    
    void input() {
        cout << "Enter a number: ";
        cin >> number;
    }

    
    void show() {
        int first = 0, second = 1, next;
        cout << "Fibonacci series up to " << number << ": ";

        if (number <= 0) {
            cout << "Invalid input. Please enter a positive integer.";
        } else {
            for (int i = 0; i < number; ++i) {
                if (i == 0) {
                    cout << first << " ";
                    continue;
                }
                if (i == 1) {
                    cout << second << " ";
                    continue;
                }
                next = first + second;
                first = second;
                second = next;
                cout << next << " ";
            }
        }
        cout << endl;
    }
};

int main() {
    Series series;
    series.input();
    series.show();
    return 0;
}
