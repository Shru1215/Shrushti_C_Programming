//Find the largrest element of an array using a pointer //
#include<stdio.h>
int main ()
{
    int a[] ={10,20,30,400,50,60};
    int i,max;
    int *p;

    p = a;
    max = *p;

for(i = 1; i <6; i++)
{
    if(*(p+i) > max)
    {
        max = *(p+i);
    }

}
    printf("Largest Element = %d",max );
}

