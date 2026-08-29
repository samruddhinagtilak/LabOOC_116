#include<iostream>
using namespace std;
int main()
{
  int a,b;

  cout<<"Enter a Number=";
  cin>>a>>b;

  a=a+b;
  b=a-b;
  a=a-b;

  cout<<"After Swapping=";
  cout<<"\na="<<a;
  cout<<"\nb="<<b;
  return 0;
  
}
