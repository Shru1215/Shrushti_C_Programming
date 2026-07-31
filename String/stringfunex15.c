//Read a name and print it with the first letter capitalised //

#include<stdio.h>
#include<string.h>

int main()
{
    char str[50];

    printf("Enter a name: ");
    scanf("%s", str);

    strlwr(str);
    str[0] = str[0] - 32;

    printf("Name = %s", str);

    return 0;
}
