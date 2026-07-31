//input any 5 integers and find their product \\

#include<stdio.h>
int main()
{
    int i, n ,p;
    p= 1;

    for(i = 1; i <= 5; i++)
    {
         printf("Enter integers: ");
        scanf(" %d", &n);
        p *= n;
    }
       printf("Product = %d", p);

    }


