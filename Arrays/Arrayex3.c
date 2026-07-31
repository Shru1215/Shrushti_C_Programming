// read a 3*3 matrix and print its first column

#include<stdio.h>

int main()
{
    int a[3][3], i, j;

    printf("Enter  matrix elements:\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("First column elements are:\n");

    for(i=0; i<3; i++)
    {
        printf("%d\n", a[i][0]);
    }

}
