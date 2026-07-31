// input 5 integers and check if each integer is odd or even\\

#include<stdio.h>
int main()
{
    int ecount ,ocount,i , a,b,c,d,e;

    printf("enter 1st interger:");
    scanf("%d",&a);
     printf("enter 2nd interger:");
    scanf("%d",&b);
     printf("enter 3rd interger:");
    scanf("%d",&c);
     printf("enter 1st interger:");
    scanf("%d",&d);
     printf("enter 1st interger:");
    scanf("%d",&e);
    for(i=0; i<=4; i++)
    {
        if(i %2 == 0)
        {
            printf("even number\n");
            ecount++;
        }
        else
        {
            printf("odd number\n");
            ocount++;
        }
    }
}
