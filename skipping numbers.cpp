#include <iostream>
using namespace std;

// Base class Number
class Number {
protected:
    int start;
    int end;

public:
    Number(int s, int e) : start(s), end(e) {}

    void printNumbers() {
        for (int i = start; i <= end; ++i) {
            cout << i << " ";
        }
        cout << endl;
    }
};

// Derived class Skipper
class Skipper : public Number {
private:
    int skip;

public:
    Skipper(int s, int e, int k) : Number(s, e), skip(k) {}

    void printNumbers() {
        for (int i = start; i <= end; i += (skip + 1)) {
            cout << i << " ";
        }
        cout << endl;
    }
};

int main() {
    int M, N, K;

    // Input values for M, N, K
    cout << "Enter starting number (M): ";
    cin >> M;
    cout << "Enter ending number (N): ";
    cin >> N;
    cout << "Enter number of skips (K): ";
    cin >> K;

    Skipper sk(M, N, K);

    cout << "Numbers from " << M << " to " << N << " skipping " << K << " numbers in between:" << endl;
    sk.printNumbers();

    return 0;
}

