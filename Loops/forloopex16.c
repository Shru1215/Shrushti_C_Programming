// input any 5 integer and find
// a. print if each integer is odd or even
// b. count num of odd or even number
// c. find sum of even number
//  d. find sum of all numbers \\

#include<stdio.h>
int main()
{
    int n ,i ,ceven,codd,sumeven,sumall ;
    float avg;
     ceven=0;
     codd=0;
     sumeven=0;
     sumodd=0;
     sumall=0;

     for(i=0;i<=5;i++)
     {
         printf("Enter integer: ");
        scanf("%d", &n);

        sumall +=  n;

        if(n % 2 == 0)
        {
            printf("%d is Even\n", n);
            ceven++;
            sumeven += n;
        }
        else
        {
            printf("%d is Odd\n", n);
            codd++;
            sumodd += n;
        }
    }

    printf("Count of even numbers = %d\n", ceven);
    printf("Count of odd numbers = %d\n", codd);
    printf("Sum of even numbers = %d\n", sumeven);
    printf("Sum of odd numbers = %d\n", sumodd);
    printf("Sum of all numbers = %d\n", sumall);
    avg = sumall/5.0;
    printf("Avg of all numbers = %d\n", avg);

    }

