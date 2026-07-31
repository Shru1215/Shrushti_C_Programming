//copy one array 'a' to array'b' and print both array//

#include<stdio.h>
int main()
{
    int n, a[50], b[50], i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
     printf("array a\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

    printf("array b\n");

    for(i = 0; i < n; i++)
    {
        b[i]=a[i];
        printf("%d ", b[i]);
    }
}
