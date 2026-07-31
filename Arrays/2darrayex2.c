#include<stdio.h>
int main()
{
    int a[50][50],b[50][50],c[50][50],m,n,i,j;
    printf("enter the number of rows(1-50): ");
     scanf("%d",&m);
     printf("enter the number of columns(1-50): ");
     scanf("%d",&n);

     printf("\nenter the values of matrix a:");
     for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)

        {
            scanf("%d",&a[i][j]);
        }

     }

      printf("\nenter the values of matrix b:");
     for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)

        {
            scanf("%d",&b[i][j]);
        }

     }
      for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)

        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
}
}
