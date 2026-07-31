// change a variables value through a pointer and print the new value//

#include<stdio.h>

int main()
{
    int a;
    int *p;

    printf("Enter a value: ");
    scanf("%d", &a);

    p = &a;

    *p= 50;

    printf("current value = %d\n", a);
    printf("new value = %d\n", *p);


}
