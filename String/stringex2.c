// print the string using loop

#include<stdio.h>
int main()
{
   char a[]="international school";
   int i ;

   for(i=0;i< 21;i++)
   {
       if(a[i]!='\0')
       {
            printf("%c", a[i]);
       }
       else
       {
           break;
       }
   }

}
