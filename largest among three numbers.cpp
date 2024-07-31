// largest among three numbers
#include<iostream>
using namespace std;
int main(){
	int n1,n2,n3;
	cout<<"enter the first number:";
	cin>>n1;
	cout<<"enter the second number:";
	cin>>n2;
	cout<<"enter the third number:";
	cin>>n3;
	if(n1>=n2 && n1>=n3){
		cout<<"largest number = "<<n1<<endl;
	}
	else if(n2>=n1 && n2>=n3){
		cout<<"largest number = "<<n2<<endl;
	}
	else{
		cout<<"largest number = "<<n3<<endl;
	}
	return 0;
}
