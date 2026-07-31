//read n numbers ,sort them and check whether the sorted array reads the same both ways//

#include<stdio.h>
int main()
{
    int a[100] , n, i, j, temp, flag ;
    flag=1;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter elements \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("entered array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1 - i; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("\nSorted array:\n");
    for(i = 0; i < n; i++)

    {
     printf("%d\t ", a[i]);

    }
    for(i=0;i<n;i++)
    {

    if(a[i]!=a[n-i-1])
     {
         flag=0;
         break;
     }
    }

    if(flag==0)
    {
        printf("\n\n not a Palindrome");
    }
    else
    {
        printf("\n\n Palindrome");

    }


}

