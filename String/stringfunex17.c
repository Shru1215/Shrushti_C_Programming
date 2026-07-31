//Read a word and a character and count how many times that character appears//

#include<stdio.h>
int main()
{
    char a[25], ch,l;
    int i, count ;
    count=0;

    printf("Enter a word: ");
    scanf("%s", a);

    printf("Enter a character: ");
    scanf(" %c", &ch);

    for(i = 0; a[i] != '\0'; i++)
    {
        if(a[i] == ch)
        {
            count++;
        }
    }
    printf("Count = %d", count);
}

