#include<stdio.h>
#include<math.h>

int main ()
{
    int num ;
    float cube;

    printf("Enter a number :");
    scanf("%d", &num);
    cube = pow (num , 3);
    printf("cube= %f",cube);
}

