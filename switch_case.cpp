#include<iostream>
using namespace std;
int main()
{
  int a,b,choice;

  cout<<"Enter Two Numbers=";
  cin>>a>>b;

  cout<<"\n1. Addition";
  cout<<"\n2. Subtraction";
  cout<<"\n3. Multiplication";
  cout<<"\n4. Division";
  cout<<"\n5. Modulus";

  cout<<"\n Enter  Your Choice=";
  cin>>choice;

  switch(choice)
    {
      case 1:
        cout<<"Result="<<a+b;
        break;
      case 2:
        cout<<"Result="<<a-b;
        break;
      case 3:
        cout<<"Result="<<a*b;
        break;
      case 4:
        cout<<"Result="<<(float)a/b;
        break;
      case 5:
        cout<<"Result="<<a%b;
        break;
      default:
        cout<<"Invalid Choice";
    }
  return 0;
}
        
    
