#include<iostream>
using namespace std;
int main(){
	int n1,n2;
	cout<<"emter first number:";
	cin>>n1;
	cout<<"enter second number:";
	cin>>n2;
	string isequal=(n1==n2)?"equal":"not equal";
	cout<<"two numbers are "<<(isequal)<<endl;
	return 0;
}
