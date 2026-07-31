//use a pointer to a char and print the character and its ASCII value

#include<stdio.h>
int main()
{
    char ch;
    char *p;

    p = &ch;

    printf("Enter a character: ");
    scanf("%c", p);

    printf("Character = %d\n", p);
    printf("ASCII Value = %d", *p);
}
