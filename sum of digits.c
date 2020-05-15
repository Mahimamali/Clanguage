#include<stdio.h>
int sumod (int n)
{
  if(n!=0)
  {
    return (n%10+sumod(n/10));
  }
  else
  {
    return 0;
  }
}
int main()
{
   int n,sum=0;
   printf("Enter a number: ");
   scanf("%d",&n);
   sum=sumod(n);
   printf("Sum of digits is:%d",sum);
   return 0;
}
