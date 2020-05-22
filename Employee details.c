#include<stdio.h>
struct employee
{
    char name[20];
    char depar[20];
    int salary,empno;
};
int details(struct employee emp[], int n)
{
    printf("Empno.\tName\tDepartment\tSalary\n");
    for(int i=0;i<20;i++)
    {
        printf("%d\t%s\t%s\t%d\n",emp[i].empno,emp[i].name,emp[i].depar,emp[i].salary);
    }
}
int main()
{
    struct employee emp[20];
    for(int i=0;i<20;i++)
    {
        printf("Enter employee info: Employee no., Name, Department and Salary\n");
        scanf("%d %s %s %d",&emp[i].empno,&emp[i].name,&emp[i].depar,&emp[i].salary);
    }
    details(emp,20);
    return 0;
}
