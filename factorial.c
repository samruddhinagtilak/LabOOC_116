#include<stdio.h>
int main()
{
  int n,i;
  long long factorial=1;

  printf("Enter A Number=");
  scanf("%d",&n);

  for(i=1;i<=n;i++)
    {
      factorial = factorial * i;
    }
  printf("Factorial = %11d",factorial);

  return 0;
}
