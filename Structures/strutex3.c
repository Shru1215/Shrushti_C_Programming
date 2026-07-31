//read 3 employees and print the one with the highest salary//

#include<stdio.h>
struct employee
{
    int id;
    char name[20];
    int salary;
};

int main()
{
    struct employee e[3];
    int i;
    max=0;

    for(i=0; i<3; i++)
    {
        printf("Enter ID: ");
        scanf("%d",&e[i].id);

        printf("Enter Name: ");
        scanf("%s",e[i].name);

        printf("Enter Salary: ");
        scanf("%d",&e[i].salary);
    }
        if(e[0].salary > e[1].salary && e[0].salary > e[2].salary)
        {
            printf(" %s is having highest salary",e[0].name);
        }
        else if( e[1].salary > e[2].salary)
        {
             printf(" %s is having highest salary",e[1].name);
        }
       else
        {
           printf("  %s is having highest salary",e[2].name );
       }
}


