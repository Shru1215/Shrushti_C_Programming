//d. square roots of 1,2,3--10(calculate sqrt value)


#include<stdio.h>
#include<math.h>
int main()
{
    float i, sq;

    for(i = 1; i <= 10; i++)
    {
        sq = sqrt(i);
        printf("Square root = %f\n", sq);
    }
}
