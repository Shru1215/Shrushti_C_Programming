#include<stdio.h>
int main ()
{
    float b,h ,area;
    printf("Enter the base :");
    scanf("%f", &b);
    printf("Enter the height :");
    scanf("%f", &h);

    area= (b*h)/2.0;

    printf("Area of triangle =%f",area);
}
