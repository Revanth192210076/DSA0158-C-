//  Find the Cuberoot of a number in C++ using any conditional statements
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,cuberoot;
	cout<<"enter the number:";
	cin>>n;
	if(n>=0){
		cuberoot=cbrt(n);
		cout<<"cuberoot of a number = "<<cuberoot<<endl;
	}
	else{
		cout<<"cuberoot cant be caluclated for negative numbers"<<endl;
	}
	return 0;
}
