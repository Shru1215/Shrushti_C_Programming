#include<stdio.h>
int main()
{
    int ch;
    float a, b, r;

    printf("Enter 1st numbers: ");
    scanf("%f", &a);

    printf("Enter 2nd numbers: ");
    scanf("%f", &b);

    printf("MENU\n");
    printf("------------------------\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");

    printf("Enter your choice: ");
    scanf("%d", &ch);

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
            printf("Multiplication = %f", r);
            break;

        case 4:
              if(b == 0)
            {
                printf("denominator cannot be zero ");
            }
            else
            {
                r = a / b;
                printf("Quotient = %f", r);
            }
            break;

        default:
            printf("Invalid choice");
    }
}
