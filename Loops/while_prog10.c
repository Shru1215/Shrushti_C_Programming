
/* find the  count of all even num and odd num from 0 to n and also find the sum of even numbers and and
odd num take inout of n from user  */

#include<stdio.h>
int main()
{
    int n, i ,ecount , ocount , esum ,osum;
    i=0;
    ecount = 0,
    ocount = 0;
    esum = 0,
    osum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    while(i <= n)
    {
        if(i % 2 == 0)
        {
            ecount++;
            esum = esum + i;
        }
        else
        {
            ocount++;
            osum = osum + i;

        }

       i++;
    }

    printf("\nEven Count = %d", ecount);
    printf("\nOdd Count = %d", ocount);
    printf("\nEven Sum = %d", esum);
    printf("\nOdd Sum = %d", osum);


}
