// read a word and reverse it using strrev//

#include<stdio.h>
#include<string.h>
int main ()
{
    char a[50];

    printf("Enter a word: ");
    scanf("%s", a);
    strrev(a);
    printf("reversed  word:%s",a);
}

