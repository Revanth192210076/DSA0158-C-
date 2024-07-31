#include<iostream>
#include<string>
using namespace std;

int main (){
	string str,temp;
	int i=0,j;
	
	cout<<"Enter the String:";
	cin>>str;
	
	temp=str;
	
	j=str.length()-1;
	
	
	while(i<j)
	{
		swap(str[i],str[j]);
		i++;
		j--;
	}
	
	if(temp==str){
		cout<<"It is a Palindrome"<<endl;
	}else{
		cout<<"Not a Palindrome"<<endl;
	}
     
     return 0;
}
