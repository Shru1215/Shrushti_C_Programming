// read a square matrix and print its seconadary diagonal//

#include<stdio.h>

int main()
{
    int a[3][3],n, i, j;

    printf("Enter matrix elements:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Secondary diagonal elements:\n");

    for(i = 0; i< 3; i++)
    {
        printf("%d ", a[i][2-i]);
    }
}
