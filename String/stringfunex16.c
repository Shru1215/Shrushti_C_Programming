//Read two words and print them joined together along with their total length//

#include<stdio.h>
#include<string.h>

int main()
{
    char a[25], b[25];

    printf("Enter first word: ");
    scanf("%s", a);

    printf("Enter second word: ");
    scanf("%s", b);

    strcat(a , b);

    printf("Joined word = %s\n", a);
    printf("Total length = %d", strlen(a));


}
