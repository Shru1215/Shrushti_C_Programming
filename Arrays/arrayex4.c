//find sum of two arays and store result into a third array //

#include<stdio.h>
int main()
{
    int n, a[50], b[50], c[50], i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter first array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter second array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("Sum of arrays \n");
      for(i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i];
        printf("%d ", c[i]);
    }
}
