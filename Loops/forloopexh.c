#include<stdio.h>
#include<math.h>
int main ()
{
    int i , n ,r;
    for(i=10;i>=1;i--)
    {
        n = 11-i;
        r= pow(i,n);
        printf("%d\n",r);
    }

}
