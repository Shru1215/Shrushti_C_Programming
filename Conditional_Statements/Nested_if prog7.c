#include<stdio.h>

int main()
{
    int p , c, m , total ;
    float avg ;

     printf("Enter Physics marks: ");
    scanf("%d", &p);

    printf("Enter Chemistry marks: ");
    scanf("%d", &c);

    printf("Enter Maths marks: ");
    scanf("%d", &m);

    if(p >= 35 && c >= 35 && m >= 35)
    {
        total = p + c + m;
        avg = total / 3.0;

        printf("Total = %d\n", total);
        printf("Average = %.2f\n", avg);

        if(avg >= 35 && avg < 50)
        {
            printf("Grade D");
        }
        else if(avg >= 50 && avg < 65)
        {
            printf("Grade C");
        }
        else if(avg >= 65 && avg < 80)
        {
            printf("Grade B");
        }
        else if(avg >= 80 && avg < 90)
        {
            printf("Grade A");
        }
        else if(avg >= 90 && avg <= 100)
        {
            printf("Grade S");
        }
        else if(avg > 100)
        {
            printf("Invalid Marks");
        }
    }
    else
    {
        printf("Fail");
    }

    return 0;
}
