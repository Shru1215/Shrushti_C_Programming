//e.5^1,5^2,5^3---5^10(calaculate values)

#include<stdio.h>
#include<math.h>

int main()
{
    int i,r;

    for(i = 1; i <= 10; i++)
    {
        r = pow(5,i);
        printf("5^%d = %d\n", i,r);
    }

}
