//a. input n elemnts into an array and
//1.print array
//2. print array in reverse
//3. print alternate elements of array

#include<stdio.h>
int main ()
{
    int a[100],n,i;

     printf("enter the size of array(2-100) :");
     scanf("%d",&n);

     printf("enter array elemnts :");
     for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
     printf("array elements are -");
     for(i=0;i<n;i++)
     {
         printf("%d\t",a[i]);
     }
     printf("\n reversed array are -");
     for(i=n-1;i>=0;i--)
     {
         printf("%d\t",a[i]);
     }

     printf("\n alternate elemnts of array are -");
     for(i=0;i<n;i=i+2)
     {
         printf("%d\t",a[i]);

     }



}


