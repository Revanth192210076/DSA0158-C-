/* Develop a program to find whether the person is eligible for vote or not. And if that
particular person is not eligible, then print how many years are left to be eligible */
#include<iostream>
using namespace std;
bool eligible(int age){
	if(age>=18){
		cout<<"person is eligible to vote"<<endl;
	}
	else{
		cout<<"person is not eligible to vote he need "<<18-age<<" more years to vote"<<endl;
	}
}
int main(){
	int year;
	cout<<"enter the age:";
	cin>>year;
	eligible(year);
	return 0;
}
