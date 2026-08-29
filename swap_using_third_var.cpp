#include<iostream>
using namespace std;
int main()
{
  int a,b,temp;

  cout<<"Enter Two Numbers=";
  cin>>a>>b;

  temp=a;
  a=b;
  b=temp;

  cout<<"After Swapping=";
  cout<<"\na="<<a;
  cout<<"\nb="<<b;

  return 0;
  
}
