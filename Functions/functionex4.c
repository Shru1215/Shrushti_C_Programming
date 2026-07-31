//write a function that returns from the sum of the digits of a number//


#include <stdio.h>
int sum(int n)
{
    int s= 0, rem;

    while (n > 0)
    {
        rem = n % 10;
        s = s + rem;
        n = n / 10;
    }

    return s;
}

int main()
{
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = sum(num);

    printf("Sum of digits = %d", result);

}
