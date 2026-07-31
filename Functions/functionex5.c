//write a function that takes an array and returns the sum of its elements //

#include <stdio.h>
int sumarray(int a[10], int n)
{
    int i, sum = 0;

    for(i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    return sum;
}

int main()
{
    int a[10], n, i,t;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
   t = sumarray(a,n);
   printf("Sum o;f array elements = %d",t );

}
