/*Design and develop a menu-driven calculator using the C programming language that
allows the user to perform basic arithmetic operations. The calculator should
repeatedly display a menu, accept the user's choice, perform the selected operation
on two numbers, display the result, and continue until the user chooses to exit.
It should also handle invalid menu selections and division by zero appropriately*/

#include<stdio.h>
int main ()
{
    int ch ;
    float num1,num2,result;

    printf("-------Calculator-------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3  Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice:");'
    printf("%d",&ch);

    printf("Enter 1st number:");'
    printf("%d",&num1);

    printf("Enter 2nd number:");'
    printf("%d",&num2);

    switch(ch)
    {
    case 1:
        result = num1+ num2;
        printf("Result = %f", result);
        break;

    case 2:
        result = num1 - num2;
        printf("Result = %f", result);
        break;

    case 3:
        result = num1 * num2;
        printf("Result = %f", result);
        break;

    case 4:
            if(num2 != 0)
            {
                result = num1 / num2;
                printf("Result = %f", result);
            }
            else
            {
                printf("Division by zero is not possible.");
            }
            break;
    }

default:
            printf("Invalid choice.");

}

