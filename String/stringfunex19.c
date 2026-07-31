//Read a word and print it both forwards and backwards//
#include<stdio.h>
#include<string.h>
int main()
{
    char a[50], b[50];

    printf("Enter a word: ");
    scanf("%s", a);

    strcpy(b, a);

    strrev(b);

    printf("Forward = %s\n", a);
    printf("Backward = %s", b);
}
