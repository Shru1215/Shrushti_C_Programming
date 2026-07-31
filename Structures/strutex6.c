/*create a student structure with 8 members :rollno,name,p,c,m,total,
average and result members
a. input rllno,name,p,c,m
b.calculate total,avg members
c.if the avg is below 35 assign"fail" else "pass" to result
d.finally print all members of the structure*/

#include<stdio.h>
struct student
{
    int rollno;
    char name[50];
    int p,c,m;
    int total;
    float average;
    char result[20];
};

int main()
{
    struct student s;
    printf("Enter Roll No: ");
    scanf("%d",&s.rollno);

    printf("Enter Name: ");
    scanf("%s",s.name);

    printf("Enter Physics Marks: ");
    scanf("%d",&s.p);

    printf("Enter Chemistry Marks: ");
    scanf("%d",&s.c);

    printf("Enter Maths Marks: ");
    scanf("%d",&s.m);

    s.total = s.p + s.c + s.m;
    s.average = s.total/3.0;

    printf("\nAvergae : %f",s.average);


}
