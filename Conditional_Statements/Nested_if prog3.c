#include<stdio.h>

int main()
{
    int a, b, c;

    printf("Enter 1st side: ");
    scanf("%d", &a);

    printf("Enter 2nd side: ");
    scanf("%d", &b);

    printf("Enter 3rd side: ");
    scanf("%d", &c);

    if(a == b && b == c)
    {
        printf("Equilateral Triangle");
    }
    else if(a == b || b == c || a == c)
    {
        printf("Isosceles Triangle");
    }
    else
    {
        printf("Scalene Triangle");
    }

    return 0;
}
