//// sort n numbers in descending order and print top 3 values//

#include<stdio.h>
int main()
{
    int a[100], n, i, j, temp;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter numbers:\n");

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
      for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Top 3 values are:\n");

    for(i=0; i<3; i++)
    {
        printf("%d ", a[i]);
    }
}

