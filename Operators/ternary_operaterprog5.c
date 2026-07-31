#include<stdio.h>
int main()
{
    int a, b, min;

    printf("enter 1st  numbers: ");
    scanf("%d", &a);
    printf("enter 2nd  numbers: ");
    scanf("%d", &b);

    (a < b) ? printf("Minimum = %d",a) : printf("Minimum = %d",b) ;
}


