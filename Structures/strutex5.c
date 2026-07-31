//read 3 students and print the avearge of their marks //

#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    float marks;
};
int main()
{
    struct student s[3];
    int i,sum;
    float  avg;
    sum=0;
    avg=0;
    for(i=0; i<3; i++)
    {
        printf("Enter Roll No: ");
        scanf("%d", &s[i].rollno);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);

        sum += s[i].marks;
    }
    avg = sum / 3.0;
    printf("\nAverage Marks = %f", avg);
}
