// read a word and print it in lowercase using strlwr//

#include<stdio.h>
#include<string.h>
int main ()
{
    char a[50];

    printf("Enter a word: ");
    scanf("%s", a);
    strlwr(a);
    printf("lowercase word:%s",a);


}
