//read  square matrix and print  its primary diagonal//

#include <stdio.h>
int main()
{
    int a[3][3], i, j;

    printf("Enter matrix elements:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Primary diagonal elements:\n");

    for(i = 0; i < 3; i++)
    {
        printf("%d ", a[i][i]);
    }

}
