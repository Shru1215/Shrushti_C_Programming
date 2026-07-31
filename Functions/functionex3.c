// write a function that checks whether a number is prime (returns 1 to 0)//

#include <stdio.h>
int prime(int n)
{
    int i;
    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
            return 0;
    }
    return 1;
}
int main()
{
    int num, value;

    printf("Enter a number: ");
    scanf("%d", &num);

    value = prime(num);

    if(value == 1)
        printf("Prime Number");
    else
        printf(" Not a prime number");
}


