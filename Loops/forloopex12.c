// for 7 students ,input p,c,m subjects calculzte total marks , avg , marks and print them\\

#include<stdio.h>
int main()
{
    int i, p, c, m, total;
    float avg;

   for(i = 1; i <= 7; i++)
    {
        printf("Enter physics marks: ");
        scanf("%d", &p);

        printf("Enter chemistry marks: ");
        scanf("%d", &c);

        printf("Enter maths marks: ");
        scanf("%d", &m);

        total = p + c + m;
        avg = total / 3.0;

        printf("Total Marks = %d\n", total);
        printf("Average Marks = %f\n", avg);
    }
}
