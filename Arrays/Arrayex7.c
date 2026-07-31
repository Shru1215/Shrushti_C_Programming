// read 3*3 matrix and find the sum for each all row//

#include<stdio.h>
int main()
{
    int i, j, a[3][3], sum;

    printf("Enter matrix elements:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < 3; i++)
    {
        sum = 0;
        for(j = 0; j < 3; j++)
        {
            sum += a[i][j];
        }

    printf("Sum of each rows = %d\n", sum);

    }

}


