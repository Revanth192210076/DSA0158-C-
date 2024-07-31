// Develop a c++ program for default arguments
#include<iostream>
using namespace std;
int add(int a=0,int b=0,int c=0){
	return a+b+c;
}
int main(){
	int n1,n2,n3;
	cout<<"enter the first number:";
	cin>>n1;
	cout<<"enter second number:";
	cin>>n2;
	cout<<"enter third number:";
	cin>>n3;
	cout<<"addition of three numbers = "<<add(n1,n2,n3)<<endl;
	return 0;
}
