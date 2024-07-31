// Develop a c++ program for adding the number using function overloading concept
#include<iostream>
using namespace std;
int add(int a,int b){
	return a+b;
}
int add(int a,int b,int c){
	return a+b+c;
}
int main(){
	int n1,n2,n3;
	cout<<"enter first number:";
	cin>>n1;
	cout<<"enter second number:";
	cin>>n2;
	cout<<"enter third number:";
	cin>>n3;
	cout<<"addition of two numbers using two parameters = "<<add(n1,n2)<<endl;
	cout<<"addition of two numbers using three parameters = "<<add(n1,n2,n3)<<endl;
	return 0;
}
