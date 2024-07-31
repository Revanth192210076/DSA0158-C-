/* Develop a program to check the entered user name is valid or not using function . Get
both the inputs from the user */
#include<iostream>
#include<cstring>
using namespace std;
bool isvalid(string str1, string str2){
	return (str1==str2);
}
int main(){
	string org,reorg;
	cout<<"enter the string:";
	getline(cin,org);
	cout<<"reenter the string:";
	getline(cin,reorg);
	if(isvalid(org,reorg)){
		cout<<"username is valid"<<endl;
	}
	else{
		cout<<"username is not valid"<<endl;
	}
	return 0;
}
