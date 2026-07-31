// read two word and check whether they are equal using strcmp

#include<stdio.h>
#include<string.h>
int main ()
{
    char a[50], b[50];

    printf("Enter first word: ");
    scanf("%s", a);

    printf("Enter second word: ");
    scanf("%s", b);

    if(strcmp(a, b) == 0)
    {
        printf("Both words are equal");

    }
    else
    {
        printf("Both words are not equal");

    }
}
