//read the marks of n students and check whether anyone scored exactly 100//
//a.1st using linear search
//b.2nd using binary search//

#include <stdio.h>
int main()
{
    int  i,n, marks[100], found;
     found=0;
    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter marks: \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(marks[i] == 100)
        {
            found = 1;
            printf("Student %d scored exactly 100", i+1);
            break;
        }
    }

    if(found==0)
    {
    printf("No student scored 100");

    }
}
