// print the address of a variable using the & operator//

#include<stdio.h>
int main()
{
    int a, *p;

    printf("Enter a number: ");
    scanf("%d", &a);

     p=&a;

    printf("Address of a = %d", &a);

}
