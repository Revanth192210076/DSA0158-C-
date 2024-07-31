#include <iostream>
#include <string>

using namespace std;

int countElements(const string& str)
 {
    return str.length(); 
}

int main() 
   {
    string myString = "Revanth";

    cout << "Number of elements in the string: " << countElements(myString) << endl;

    return 0;
}

