#include<iostream> 
using namespace std; 

int main() { 

    int p, r, t, i;
	int age;
	
	 
    cout<<"Enter Age:";
    cin>> age;

    cout << " Input the Principle: "; 
    cin >> p; 

    cout << " Input the Rate of Interest: "; 
    cin >> r; 

    cout << " Input the Time: "; 
    cin >> t; 


   if(age>=60){
   	i = (p * 0.12 * t) / 100; 
   	cout<<"Simple Interest is:"<<i;
   }
   else {
   	i = (p * 0.10 * t) / 100; 
   	cout<<"Simple Interest is:"<<i;
   }



    return 0; 
}

