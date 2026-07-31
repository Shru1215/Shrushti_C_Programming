#include<stdio.h>
int main()
{
    int type, units, bill;

    printf("Electricity Bill Calculator\n");
    printf("---------------------------\n");
    printf("1. Domestic\n");
    printf("2. Commercial\n");

    printf("Enter customer type: ");
    scanf("%d", &type);

    printf("Enter units consumed: ");
    scanf("%d", &units);

    switch(type)
    {
        case 1:
            if(units < 0)
            {
                printf("Invalid units");
            }
            else if(units <= 100)
            {
                bill = units * 2;
                printf("Total Electricity Bill = %d\n", bill);
            }
            else
            {
                bill = units * 3;
                printf("Total Electricity Bill = %d\n", bill);
            }
            break;

        case 2:
            if(units < 0)
            {
                printf("Invalid Units");
            }
            else if(units <= 100)
            {
                bill = units * 5;
                printf("Total Electricity Bill = %d\n", bill);
            }
            else
            {
                bill = units * 7;
                printf("Total Electricity Bill = %d\n", bill);
            }
            break;

        default:
            printf("Invalid Customer type");
    }
}
