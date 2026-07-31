//define a date structure (day,month ,year) and read and print a date//

#include<stdio.h>
struct date
{
    int date;
    int month;
    int year;
};

int main()
{
    struct date d;
    printf("enter the date :");
    scanf("%d", &d.date);

    printf("enter the month :");
    scanf("%d", &d.month);

    printf("enter the year:");
    scanf("%d", &d.year);

    printf("Date : %d-%d-%d",d.date, d.month, d.year);



}
