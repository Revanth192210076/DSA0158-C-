#include<iostream>
using namespace std;
inline int square(int n)
{
    return n*n;
}
int main()
{
    int n;
    cout<<"Enter number to be squared : ";
    cin>>n;
    cout<<"Square of number : "<<square(n);
    return 0;
}
