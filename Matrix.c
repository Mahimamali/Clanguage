#include<stdio.h>
int main()
{
    int a[3][3],suml=0,sumr=0,i,j;
    int *p=&a[0][0];
    printf("Enter the elements of matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("element - [%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d \t",*(p+i * 3+j));
        }
        printf("\n");
    }

    printf("Sum of left and right diagonal elements of matrix :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                suml=suml+a[i][j];
            }
        }
    }
        printf("%d",suml);
        printf("\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i+j==2)
            {
                sumr=sumr+a[i][j];
            }
        }
    }
        printf("%d",sumr);
}
