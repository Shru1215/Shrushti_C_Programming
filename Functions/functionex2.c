// write a function that returns the factoral of a number //

#include <stdio.h>

int factorial(int n)
{
    int i;
    for (i = n - 1; i >= 1; i--)
    {
        n = n * i;
    }

    return n;
}

int main()
{
    int n, value;

    printf("Enter a number: ");
    scanf("%d", &n);

    value = factorial(n);

    printf("Factorial = %d", value);

}
