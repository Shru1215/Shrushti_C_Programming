//f.1^5,2^5,3^5---10^5(calaculate values)

#include<stdio.h>
#include<math.h>
int main()
{
    int i,a;

    for(i=1; i<=10; i++)
    {
        a= pow(i,5);
        printf("%d^5 = %d\n", i,a);
    }
}
