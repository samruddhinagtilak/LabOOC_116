#include<iostream>
using namespcae std;

int main()
{
    int n;
    long long factorial = 1;

    cout<<"Enter A Number=";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
      factorial = factorial*i;
     }
    cout<<"Factorial = "<<factorial;

    return 0;

}
