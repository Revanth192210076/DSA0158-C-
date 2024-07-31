#include<iostream>
using namespace std;
int main(){
	int a=5,b=6,temp;
	
	cout<<"Before Swapping a is:",cout<<a;cout<<"\n";
	cout<<"Before Swapping b is:",cout<<b;cout<<"\n";
	
	temp=a;
	a=b;
	b=temp;
	
	cout<<"After Swapping a is:",cout<<a;cout<<"\n";
	cout<<"After Swapping b is:",cout<<b;
	
	return 0;
}

