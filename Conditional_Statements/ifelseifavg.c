#include<stdio.h>
int main()
{
    int a1, a2, a3;
    float avg;

    printf("Enter marks of subject 1: ");
    scanf("%d", &a1);

    printf("Enter marks of subject 2: ");
    scanf("%d", &a2);

    printf("Enter marks of subject 3: ");
    scanf("%d", &a3);

    avg = (a1 + a2 + a3) / 3.0;

    printf("Average = %f\n", avg);

    if(avg > 35)
    {
        printf("pass");
    }

    else if(avg < 35)
    {
        printf("fail");

    }
    else
        {

          printf("fail");
    }

}

