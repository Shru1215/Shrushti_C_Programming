//read n numbers and key if present print its index, otherwise print'-1'//

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
            printf("%d", i+1);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("-1");
    }

}
