#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"Enter your Age:";
	cin>>age;
	
	if(age>18)
	cout<<"Old Enough to Vote";
	else 
	cout<<"Not Eligibile", cout<<" he needs ",cout<<18-age ,cout<<" more years to vote";
	
	return 0;
}
