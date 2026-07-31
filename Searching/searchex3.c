//read n numbers and key and present print all the positions where the key occurs//

#include<stdio.h>
int main ()
{
    int a[100],key,n,i,found;
    found=0;

     printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
     printf("Enter key: ");
    scanf("%d", &key);
    for(i = 0; i < n; i++)
    {
        if(a[i] == key)
        {
            printf("Position %d\n", i + 1);
            found = 1;
        }
    }

    if(found == 0)
    {
        printf("Key not found");
    }
}
