// Find the Square root of a number in C++ using IF-ELSE statement?
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,squareroot;
	cout<<"enter the number:";
	cin>>n;
	if(n>=0){
		squareroot=sqrt(n);
		cout<<"squareroot of a number = "<<squareroot<<endl;
	}
	else{
		cout<<"squareroot cant be identified for negative numbers"<<endl;
	}
	return 0;
}
