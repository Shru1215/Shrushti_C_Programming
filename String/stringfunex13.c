//Read a word and count its vowels and consonants//

#include<stdio.h>
#include<string.h>

int main()
{
    char a[25];
    int i, v , c , l;
    v = 0, c = 0;

    printf("Enter a word: ");
    scanf("%s", a);

    l = strlen(a);

    for(i = 0; i < l; i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' ||
           a[i]=='A' ||a[i]=='E' || a[i]=='I' || a[i]=='O' ||a[i]=='U')
           {
               v+=1;
           }

        else
        {
            c+=1;
        }
    }

    printf("Vowels = %d\n", v);
    printf("Consonants = %d", c);

}
