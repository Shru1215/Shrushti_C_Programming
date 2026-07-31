#include<stdio.h>
int main()
{
    int month;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    switch(month)
    {
        case 1:
        case 2:
            printf("Winter");
            break;
        case 3:
        case 4:
            printf("Spring");
            break;

        case 5:

        case 6: printf("Summer");
                break;

        case 7:

        case 8: printf("Monsoon");
                break;

        case 9:

        case 10:printf("Autumn");
                break;

        case 11:

        case 12:printf("early Winter");
                break;

        default: printf("Invalid Month");
    }

    return 0;
}
