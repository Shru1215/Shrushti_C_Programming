//swap two numbers using pointers//

#include<stdio.h>
int main ()
{
    int a ,b,temp;
    int *p1,*p2,*p3;
    p1=&a;
    p2=&b;
    p3=&temp;

    printf("enter 1st num:");
    scanf("%d",p1);
    printf("enter 2nd num:");
    scanf("%d",p2);

    *p3 = *p1;
    *p1 = *p2;
    *p2 = *p3;

    printf("a = %d\n",*p1);
    printf("b = %d\n",*p2);
}
