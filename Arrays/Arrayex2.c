//read a 2*2 matrix and print every elemnt with its row and column position//

#include<stdio.h>
int main()
{
    int a[2][2], i, j;

    printf("Enter matrix elements:\n");

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
     for(j=0; j<2; j++)
     {
         printf("%d: Row %d and col %d\n",a[i][j],i+1,j+1);
     }

    }


}
