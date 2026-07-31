#include<stdio.h>
int main ()
{
    int a[]={10,20,30,40,50,60,70,80,90,100};
    int i,key,found=0;

    printf("enter elemnt to serach:");
    scanf("%d",&key);

    for(i=0;i<10;i++)
    {
        if(a[i]==key)
        {
            found=1;
            printf("elemnt found %d",i+1);
            break;
        }
        if(found==0)
        {
            printf("not found");
        }
    }
}
