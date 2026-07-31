// Read a word and check whether it is a palindrome //

#include<stdio.h>
#include<string.h>
int main ()
{
  char a[50], b[50];

   printf("Enter a word: ");
    scanf("%s", a);

    strcpy(b, a);

    strrev(b);

    if(strcmp(a, b) == 0)
        {
          printf("Palindrome");

        }
    else
    {
        printf("Not a palindrome");
    }

}


