#include<iostream>
using namespace std;
int main()
{
int a,b;

cout<<"Enter A two Numbers=";
cin>>a>>b;

if(a>b)
  cout<<"largest="<<a;
else if(b>a)
  cout<<"largest="<<b;
else
  cout<<"Both Numbers are equal";

return 0;
}
