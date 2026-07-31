
#include<stdio.h>
int main ()
{
    float meter , amt, dis, amt_after_dis , tax, netbill ;
    printf("Enter cloth length in meters :");
    scanf("%f",&meter);

    amt = meter *30 ;
    dis = amt * 10 / 100 ;
    amt_after_dis = amt - dis ;
    tax = amt_after_dis * 4 /100;
    netbill =amt_after_dis +tax;

    printf("Amount =%f\n", amt);
    printf("Disount=%f\n", dis);
    printf("Amount after Disount=%f\n", amt_after_dis);
    printf("Tax =%f\n",tax);
    printf("Net Bill =%f",netbill);


}



