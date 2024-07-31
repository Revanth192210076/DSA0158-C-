#include <iostream>
using namespace std;
int& modifyValue(int& var) {
    var *= 2;  
    return var;
}

int main() {
    int num = 10;

    cout << "Original num is: " << num << endl;

    int& ref = modifyValue(num);

    cout << "Modified value: " << num <<endl;

    ref += 5;

    cout << "Further modified value is: " << num << endl;

    return 0;
}
