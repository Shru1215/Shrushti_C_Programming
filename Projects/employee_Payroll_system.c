/* Write a C program to develop an Employee Payroll System.
   The program should accept the employee's name, employee ID,
   and basic salary. Calculate the HRA, DA, Gross Salary,
   Tax, and Net Salary, and display all the details.

   Conditions:
   HRA = 20% of Basic Salary
   DA = 10% of Basic Salary
   Gross Salary = Basic Salary + HRA + DA
   Tax = 5% of Gross Salary
   Net Salary = Gross Salary - Tax
*/

#include <stdio.h>
int main()
{
    char name[50];
    int empid;
    float basic, hra, da, gross, tax, net;

    printf("----- EMPLOYEE PAYROLL SYSTEM -----\n");

    printf("Enter Employee Name: ");
    scanf("%s", name);

    printf("Enter Employee ID: ");
    scanf("%d", &empid);

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    hra = basic * 20 / 100;
    da = basic * 10 / 100;

    gross = basic + hra + da;

    tax = gross * 5 / 100;

    net = gross - tax;

    printf("\n----- EMPLOYEE DETAILS -----\n");
    printf("Employee Name : %s\n", name);
    printf("Employee ID   : %d\n", empid);
    printf("Basic Salary  : %f\n", basic);
    printf("HRA           : %f\n", hra);
    printf("DA            : %f\n", da);
    printf("Gross Salary  : %f\n", gross);
    printf("Tax           : %f\n", tax);
    printf("Net Salary    : %f\n", net);
}
