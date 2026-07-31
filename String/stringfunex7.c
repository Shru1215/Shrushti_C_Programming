// read a word and print it in uppercase using strupr//

#include<stdio.h>
#include<string.h>
int main ()
{
    char a[50];

    printf("Enter a word: ");
    scanf("%s", a);
    strupr(a);
    printf("uppercase word:%s",a);


}
