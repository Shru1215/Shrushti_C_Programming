// read a word and copy it into another using strcpy print both //

#include<stdio.h>
#include<string.h>
int main ()
{
    char a[50], b[50];

    printf("Enter a word: ");
    scanf("%s", a);

    strcpy(b, a);

    printf("Original word = %s\n", a);
    printf("Copied word = %s", b);
}

