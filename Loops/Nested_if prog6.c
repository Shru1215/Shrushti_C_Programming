/*Input the current month as integer and print the season it belongs to:
If month is 3,4,5 print summer
If month is 6,7,8 print monsoon
If month is 9,10,11 print autumn
If month is 12,1,1 print winter
Else print invalid month*/

#include<stdio.h>
int main()
{
    int m;

    printf("Enter month number: ");
    scanf("%d", &m);

    if(m == 3 || m == 4 || m == 5)
    {
        printf("summer");
    }
    else if(m == 6 || m == 7 || m == 8)
    {
        printf("monsoon");
    }
    else if(m == 9|| m == 10 || m == 11)
    {
        printf("autumn");
    }
    else if(m == 12 || m == 1 || m == 2)
    {
        printf("winter");
    }
    else
    {
        printf("Invalid month");
    }

}
