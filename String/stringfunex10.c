// Read a first name and a last name and join them with a space using strcat //

#include<stdio.h>
#include<string.h>
int main ()
{
    char first[50], last[50];

    printf("Enter first name: ");
    scanf("%s", first );

    printf("Enter second name: ");
    scanf("%s", last);

    strcat(first , " " );
    strcat(first, last);

    printf("Full Name = %s", first);


}


