#include<stdio.h>
int main()
{
    int a;
    printf("Enter marks: ");
    scanf("%d",&a);
    if(85<=a && a<=100)
    {
        printf("Grade A");
    }
    else if(70<=a && a<=84)
    {
        printf("Grade B");
    }
    else if(55<=a && a<=69)
    {
        printf("Grade C");
    }
    else if(40<=a && a<=54)
    {
        printf("Grade D");
    }
    else if(a<40)
    {
        printf("Grade F");
    }
}
