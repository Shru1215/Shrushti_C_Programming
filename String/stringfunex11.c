// Read the marks of 3 subjects,store "Pass" or "Fail" in a string and print it //

#include<stdio.h>
#include<string.h>
int main ()
{
    int m1,m2,m3, result[100];

    printf("Enter marksof 1st subject : ");
    scanf("%d", &m1 );

    printf("Enter marks of 2nd subject : ");
    scanf("%d", &m2);

    printf("Enter marks of 3rd subject : ");
    scanf("%d", &m3);

    if(m1 >= 35 && m2 >= 35 && m3 >= 35)
    {
        strcpy(result, "Pass");

    }
    else
    {
        strcpy(result, "Fail");
    }

    printf("Result = %s", result);







}


