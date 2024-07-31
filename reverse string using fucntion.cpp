#include <iostream>
#include<algorithm>
#include <string>
using namespace std;

string reverseString(const string& str) {
   string a=str;
    reverse(a.begin(), a.end());
    return a;
}

int main() {
    string input;
    
    cout << "Enter a string: ";
    cin>>input;
    
    string reversed = reverseString(input);
    
    cout << "Reversed string: " << reversed << endl;

    return 0;
}

