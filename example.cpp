#include<iostream>
using namespace std;

int main(){
	int a=0,b=1;
	int n;
	
	cout<<"Enter the n value:";
	cin>>n;
	
	
	cout<<"Fibonacci Series is:"<<endl;
	cout<<a<<" "<<b<<" ";
	
	for(int i=3;i<=n;i++){
		int c=a+b;
		cout<<c<<" ";
		a=b;
		b=c;
	}
	cout<<endl;
	
	return 0;
}
