#include<stdio.h>
int main()
{
    int stream , marks;

    printf("Student Result System\n");
    printf("---------------------\n");
    printf("1. Science\n");
    printf("2. Commerce\n");

    printf("Enter stream: ");
    scanf("%d", &stream);

    printf("Enter marks: ");
    scanf("%d", &marks);

    switch(stream)
    {
        case 1:
            if(marks <0)
         {
              printf("Invalid marks ");
         }
            else if(marks >= 80)
            {
                printf("Result : Distinction");

            }
                else
                {
                    printf("Result : Pass");
                }
            break;

        case 2:
             if(marks < 0)
         {
             printf("Invalid marks ");
         }
            if(marks >= 70)

               {
                   printf("Result : Distinction");
               }
            else
            {
                  printf("Result : Pass");

            }
             break;

        default:
            printf("Invalid stream");
    }


}



