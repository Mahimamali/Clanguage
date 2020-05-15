#include<stdio.h>
int prime(int n,int i)
{
  if(i==1)
  {
      return 1;
  }
  else
  {
   if(n%i==0)
   {
       return 0;
   }
   else
   {
       return prime(n,i-1);
   }
  }
}
int main()
{
   int n,a,i;
   printf("Enter a number: ");
   scanf("%d",&n);
   a=prime(n,n/2);
   if(a==1)
   {
       printf("%d is a prime number",n);
   }
   else
   {
       printf("%d is not a prime number",n);
   }
}

