#include<stdio.h>
#include<string.h>
int main()
{
    char str[17];
    printf("enter a string:");

    fgets(str,17,stdin);

    printf("%s" ,str );
}


