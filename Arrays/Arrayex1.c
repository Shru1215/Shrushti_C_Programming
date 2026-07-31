//read a 3*3 matrix and print the elemnts at row 2,column 3//

#include<stdio.h>
int main()
{
    int a[3][3], i, j;

    printf("Enter matrix elements:\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n Element at row 2 column 3 is %d", a[1][2]);
}
