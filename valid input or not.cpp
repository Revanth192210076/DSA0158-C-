#include <iostream>
#include <string>
using namespace std;

bool checkUsernameValidity(const string& username1, const string& username2) {
    if (username1 == username2) {
        return true;
    } else {
        return false;
    }
}

int main() {
    string username1, username2;

  
    cout << "Enter the user name: ";
    getline(cin, username1);
    cout << "Reenter the user name: ";
    getline(cin, username2);

   
    if (checkUsernameValidity(username1, username2)) {
        cout << "User name is Valid" << endl;
    } else {
        cout << "User name is Invalid" << endl;
    }

    return 0;
}

