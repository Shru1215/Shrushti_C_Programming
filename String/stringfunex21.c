/* Write a C program to read a string from the user and count the number of:
   Uppercase alphabets
   Lowercase alphabets
   Total alphabets
   Digits
   Spaces
   Special characters
   Words
*/

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i, up, lw, alpha, digit, space, sp, word;
     up=0,lw=0, alpha=0, digit=0, space=0, sp=0, word=0;

    printf("Enter a string: ");
    fgets(str,100,stdin);

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            up++;
        }


        else if(str[i]>='a' && str[i]<='z')
            {
                lw++;

            }
        else if(str[i]>='0' && str[i]<='9')
           {
                digit++;

           }
        else if(str[i]==' ')
        {
            space++;
            word++;
        }

        else if(str[i]!='\n')
            {
                sp++;

            }
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
        {
                alpha++;

        }
    }

    printf("\nUppercase alphabets = %d", up);
    printf("\nLowercase alphabets = %d", lw);
    printf("\nTotal alphabets = %d", alpha);
    printf("\nDigits = %d", digit);
    printf("\nSpaces = %d", space);
    printf("\nSpecial characters = %d", sp);
    printf("\nWords = %d", word);
}
