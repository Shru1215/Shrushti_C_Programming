//input n elements and find sum of array //

#include<stdio.h>
int main()
{
   int  n ,a[50],sum,i;
   sum=0;

    printf("enter the size of array(2-10):");
   scanf("%d", &n);

   printf("enter array elemnts :");

   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
       sum += a[i];

   }

    printf("sum =%d",sum);

}


