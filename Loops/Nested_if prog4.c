// Find biggest of three numbers a b c\\

#include<stdio.h>
 int main ()
 {
      int a , b ,c ;

      printf("Enter 1st num :");
      scanf("%d", &a);

      printf("Enter 2nd num :");
      scanf("%d", &b);

      printf("Enter 3st num:");
      scanf("%d", &c);

      if(a>b)
      {
          if(a > c)
          {
              printf("Biggest number = %d", a);
          }
          else
          {
              printf("Biggest number = %d", c);
          }
      }
      else if(b>c)
      {
           printf("Biggest number = %d", b);
          }

       else
        {
            printf("Biggest number = %d", c);
        }
 }
