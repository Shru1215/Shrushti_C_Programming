/*Write a C program to simulate an ATM Banking System. The program should
 allow the user to check the account balance, deposit money, withdraw money,
 and exit. If the withdrawal amount is greater than the available balance,
 display an appropriate error message.*/

 #include<stdio.h>
 int main ()
 {
     int ch;
     float balance , amt;
     balance = 5000;

     printf("---ATM Banking system---\n");
     printf("1. Check Balance\n");
     printf("2. Deposit Money\n");
     printf("3. Withdraw Money\n");
     printf("4. Exit\n");


     printf("enter your choice:");
     scanf("%d",&ch);

     switch(ch)
     {
         case 1:
             printf("available -Balance = Rs. %f\n",balance);
             break;

        case 2:
             printf("enter amount to deposit: ");
             scanf("%f",&amt);

             balance = balance + amt ;

             printf("amount deposited successfully\n");
             printf("available balance = Rs. %f\n",balance);
             break;

        case 3:
             printf("enter amount to withdraw:");
             scanf("%f",&amt);

             if(amt <= balance)
             {
                 balance = balance - amt ;
                printf("amount withdrawn successfully.\n");
                printf("available Balance = Rs. %f\n", balance);
             }
             else
             {
                 printf("Insufficient Balance.\n");
             }
             break;

        case 4:
            printf("Thank You for Using ATM.\n");
            break;

        default:
            printf("Invalid Choice.\n");
    }
}


