#include<stdio.h>
int main()
{
    int n ;

    printf("Enter an integer: ");
    scanf("%d", &n);


    switch(n % 2)
    {
        case 0:
            printf("Even Number");
            break;

        case 1:
            printf("Odd Number");
            break;

        default:
            printf("Invalid number");
    }

}
