#include<stdio.h>
int main()
{
    int n;

    printf("enter a number: ");
    scanf("%d", &n);

    if(n > 0 && n <= 9)
    {
        printf("Positive single digit number");
    }
    else if(n >= 10 && n <= 99)
    {
        printf("Positive duble dgit nmber");
    }
    else if(n >= 100 && n <= 999)
    {
        printf("Positive three dgit nmber");
    }
    else
    {
        printf("Some other digit");
    }

}
