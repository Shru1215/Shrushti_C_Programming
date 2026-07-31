
#include<stdio.h>
int main ()
{
    float l, b, area ,perimeter;
    printf("Enter length :");
    scanf("%f", &l);
    printf("Enter breadth :");
    scanf("%f", &b);

    area= l*b ;
    perimeter = 2*(l+b);
    printf("Area of reactangle = %f\n",area);
    printf("Perimeter of rectangle =%f",perimeter);
}
