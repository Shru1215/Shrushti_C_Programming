
#include<stdio.h>
int main ()

{
    float s , hra, da , gs ;
    printf("Enter basic salary :");
    scanf("%f", &s);
    hra = s*10/100 ;
    da = s*25/100 ;
    gs = s+hra+da ;
    printf("HRA = %f",hra);
    printf("DA = %f",da);
    printf("gross salary = %f",gs);
}

