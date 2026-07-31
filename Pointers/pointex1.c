//read two numbers and find there sum using pointers//

#include<stdio.h>
int main ()
{
    int a , b,*p,*q ,sum;
    p = &a;
    q = &b;
    printf("enter first num :");
    scanf("%d",p);
    printf("enter 2nd num :");
    scanf("%d",q);
    sum = *p + *q;
    printf("sum = %d",sum);
}
