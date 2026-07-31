#include<stdio.h>
#include<math.h>

int main ()
{
    int num ;
    float sq;

    printf("Enter a number :");
    scanf("%d", &num);
    sq = pow (num , 2);
    printf("square = %f",sq);
}
