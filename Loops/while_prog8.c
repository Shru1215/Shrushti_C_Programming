 /* find product of 0-n natural numbers take input of n from user*/

#include<stdio.h>
int main ()
{
    int i , n, p;
    i=1;
    p=1;
    printf("enter n =");
    scanf("%d",&n);
    while(i <= n)
    {
        p *= i;
        i++;
    }
     printf("product= %d\n",p);
 }





