/* define a 2D array with user input size and print it */

#include<stdio.h>
int main ()
 {
     int a[50][50], i,j,m,n;
     printf("enter the number of rows(1-50): ");
     scanf("%d",&m);
     printf("enter the number of columns(1-50): ");
     scanf("%d",&n);

    printf("\n enter the array elemnts");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
         scanf("%d",&a[i][j]);

        }
    }
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
                printf("%d\t",a[i][j]);

      }
        printf("\n");

    }

 }

