#include<stdio.h>
int main()
{
    int ch, a, b;
    float r;

    printf("MENU\n");
    printf("-------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice (1-4): ");
    scanf("%d", &ch);

    printf("Enter 1st integer: ");
    scanf("%d", &a);

    printf("Enter 2nd integer: ");
    scanf("%d", &b);

    switch(ch)
    {
        case 1:
            r = a + b;
            printf("Sum = %f", r);
            break;

        case 2:
            r = a - b;
            printf("Difference = %f", r);
            break;

        case 3:
            r = a * b;
            printf("Product = %f", r);
            break;

        case 4:
            if(b == 0)
            {
                printf("Denominator cannot be zero");
            }
            else
            {
                r = (float)a / b;
                printf("Quotient = %f", r);
            }
            break;

        default: printf("Invalid Choice");
    }

}
