// Read a word and convert it to uppercase.//


#include<stdio.h>
#include<string.h>
int main ()
{
    char b[50];

    printf("Enter a word: ");
    scanf("%s", b);
    strupr(b);
    printf("uppercase word:%s",b);


}
