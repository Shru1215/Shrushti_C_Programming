//Read 2 word and join them using strcat//

#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],b[50];

    printf("Enter first word: ");
    scanf("%s", a);

    printf("Enter second word: ");
    scanf("%s", b);

     strcat(a,b);
    printf("join word= %s", a);

}
