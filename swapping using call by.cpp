#include <iostream>

void swapByValue(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}


void swapByReference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a, b;

    
    std::cout << "Enter the value for a: ";
    std::cin >> a;
    std::cout << "Enter the value for b: ";
    std::cin >> b;

    
    std::cout << "Original values:\na = " << a << "\nb = " << b << std::endl;

    
    swapByValue(a, b);
    std::cout << "The value after swapping for call by value:\na = " << a << "\nb = " << b << std::endl;

    
    swapByReference(a, b);
    std::cout << "The value after swapping for call by reference:\na = " << a << "\nb = " << b << std::endl;

    return 0;
}
