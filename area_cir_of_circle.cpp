#include<iostream>
using namespace std;
int main()
{
  float radius;
  const float PI =3.14159;

  cout<<"Enter radius=";
  cin>>radius;

  cout<<"Area ="<<PI * radius * radius;
  cout<<"\nCircumference = "<<2 *PI * radius;

  return 0;
}
