// use a pointer to a float and print the value it points to //

#include<stdio.h>
int main()
{
    float a;
    float *p;

    p = &a;

    printf("Enter a float value: ");
    scanf("%f", &a);

    printf("Value it points to = %f", *p);
}
