/*Create an array of structures for N employees whose members are empno, name, salary.
a. Input N employees information.
b. Input an empno as the search value and check if it is present in the array or not.
If found, print its member information.*/

#include<stdio.h>
struct employee
{
    int empno;
    char name[20];
    float salary;
};

int main()
{
    struct employee e[100];

    int n,i,search;

    printf("Enter Number of Employees: ");
    scanf("%d",&n);


    for(i=0;i<n;i++)
    {
        printf("\nEnter Employee Number: ");
        scanf("%d",&e[i].empno);

        printf("Enter Employee Name: ");
        scanf("%s",e[i].name);

        printf("Enter Salary: ");
        scanf("%f",&e[i].salary);
    }

    printf("\nEnter Employee Number to Search: ");
    scanf("%d",&search);

        for(i=0;i<n;i++)
        {
            if(e[i].empno == search)
            {
                printf("employee found \n");
                printf("employee no = %d\n",e[i].empno);
                printf("employee name = %s\n",e[i].name);
                printf("employee name = %f\n",e[i].salary);

                break;
            }
        }
        if(e[i].empno != search)
        {
            printf(" employee not found");
        }

}
