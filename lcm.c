#include<stdio.h>
int gcd(int a, int b)
{
    if(a==0)
    {
        return b;
    }
    else
    {
    return gcd(b%a,a);
    }
}
int lcm(int a, int b)
{
    return ((a*b)/gcd(a,b));
}
int main()
{
    int num1,num2,a;
    printf("Enter first number : ");
    scanf("%d",&num1);
    printf("Enter second number : ");
    scanf("%d",&num2);
    a=lcm(num1,num2);
    printf("The LCM of %d and %d is %d",num1, num2,a );
}

