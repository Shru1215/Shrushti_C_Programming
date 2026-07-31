#include<stdio.h>
int main()
{
    int n;

    printf("Enter a number : ");
    scanf("%d", &n);

    if(n % 5 == 0)
    {
        printf("Number is multiple of 5");
    }
    else
    {
        printf("Number is not multiple of 5");
    }
}
