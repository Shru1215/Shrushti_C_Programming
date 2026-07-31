//read a 2*3 matrix and print each elemnt multiplied by 2 //

#include<stdio.h>
int main ()
{
    int a[2][3],i,j;
    printf("enter matrix elemnts:\n");
    for(i=0;i<2;i++)
    {
    for(j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
    }
    }
    printf("matrix elemnts multiplied by 2:\n");

    for(i=0;i<2;i++)
    {
    for(j=0;j<3;j++)
    {
      printf("%d ", a[i][j] * 2);

    }
    printf("\n");
}
}

