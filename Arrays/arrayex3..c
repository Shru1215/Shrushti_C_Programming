// input n elemnts into an array check if each element is odd or even//

#include<stdio.h>
int main()
{
    int n, a[50], i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            printf(" even\n");
        }
        else
        {
            printf("odd\n");

        }

    }

}
