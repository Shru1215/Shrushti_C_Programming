//h.10^1,9^2,8^3----1^10(calaculate values)

#include<stdio.h>
#include<math.h>

int main()
{
    int i,r,n;
    for(i=1;i<=10;i++)
    {
        n=11-i;
        r=pow(i,n);
        printf("%d\n",r);
    }
}
