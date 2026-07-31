//input any 10 characters  and count number of vowels and nonvowels \\

#include<stdio.h>
int main()
{
    char ch;
    int i, v , nv ;
    v=0;
    nv=0;
        for(i = 1; i <= 10; i++)
    {
         printf("Enter character: ");
         scanf(" %c", &ch);

        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
           {
               v++;
          }

        else
        {
             nv++;
        }

    }

    printf("vowels = %d\n", v);
    printf("Non-vowels = %d\n", nv);
}
