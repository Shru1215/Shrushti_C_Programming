//for 7 students ,input p,c,m subjects calculate total marks , avg ,
//marks and print them if avg is less then 35 print fail else pass
// also count number of pass anf fail students\\

#include<stdio.h>
int main()
{
    int i, p, c, m, total,pass,fail;
    float avg;
    pass = 0;
    fail = 0;

    for(i = 1; i <= 7; i++)
    {

        printf("Enter Physics marks: ");
        scanf("%d", &p);

        printf("Enter Chemistry marks: ");
        scanf("%d", &c);

        printf("Enter Maths marks: ");
        scanf("%d", &m);

        total = p + c + m;
        avg = total / 3.0;

        printf("Total Marks = %d\n", total);
        printf("Average Marks= %f\n", avg);

        if(avg < 35)
        {
            printf("Result = Fail");
            fail++;
        }
        else
        {
            printf("Result = Pass");
            pass++;
        }
    }

    printf("Number of Pass Students = %d\n", pass);
    printf("Number of Fail Students = %d\n", fail);

}
