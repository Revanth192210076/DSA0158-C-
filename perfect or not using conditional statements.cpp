// prime or not using conditional statements
#include<iostream>
using namespace std;
int main(){
	int n,i,sum=0;
	cout<<"enter the number:";
	cin>>n;
	for(i=1;i<n;i++){
		if(n%i==0){
			sum +=i;
		}
		}
		if(n==sum){
			cout<<"it is an prime number"<<endl;
		}
		else{
			cout<<"it is not an prime number"<<endl;
		}
		return 0;
	}
