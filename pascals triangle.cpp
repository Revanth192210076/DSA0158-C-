#include<iostream>
using namespace std;

int main(){

    int rows;
    cout << "Enter the Number of rows ";
    cin >> rows;

    for( int i = 0; i <  rows; i++){
        int spaces = rows - i;
        
        for( int j = 0; j < spaces; j++){
            cout<<"  ";
        }

        int coefficient;
        
        for( int j = 0; j <= i; j++){
            if( j == 0 )
                coefficient = 1;
            else 
                coefficient = coefficient * (i - j + 1) / j;

            cout << coefficient << "   ";
        }

        cout << endl;
    }


    return 0;
}

