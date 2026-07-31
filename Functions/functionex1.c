//write a function that reutrns the larger of two numbers //

#include <stdio.h>
int larger(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int x, y, t;

    printf("Enter first number: ");
    scanf("%d", &x);

    printf("Enter second number: ");
    scanf("%d", &y);

    t = larger(x, y);

    printf("The larger number is %d", t);

}
