#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main (){
  string s,a;
  cout<<"Enther the string:";
  cin>>s;
  a=s;
  reverse(a.begin(),a.end());
  if(s==a){
  cout<<"Palindrome";
}
  else {
  cout<<"Not a Palindrome";
}
  return 0;
}
