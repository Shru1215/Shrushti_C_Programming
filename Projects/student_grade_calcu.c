/* Write a C program to develop a Student Grade Calculator.The program should accept the student's name and marks in three subjects.
 It should calculate the total marks,average, percentage, and display the grade based on the percentage obtained.
*/

#include <stdio.h>
int main()
{
    char name[50];
    int m1, m2, m3, total;
    float avg, percentage;

    printf("------- STUDENT GRADE CALCULATOR -------\n");

    printf("Enter student name: ");
    scanf("%s", name);

    printf("Enter marks of Subject 1 (0-100): ");
    scanf("%d", &m1);

    printf("Enter marks of Subject 2 (0-100): ");
    scanf("%d", &m2);

    printf("Enter marks of Subject 3 (0-100): ");
    scanf("%d", &m3);

    if (m1 >= 0 && m1 <= 100 &&m2 >= 0 && m2 <= 100 && m3 >= 0 && m3 <= 100)
    {
        total = m1 + m2 + m3;
        avg = total / 3.0;
        percentage = (total / 300.0) * 100;

        printf("\n------- RESULT -------\n");
        printf("Student Name : %s\n", name);
        printf("Total Marks  : %d\n", total);
        printf("Average      : %f\n", avg);
        printf("Percentage   : %f%%\n", percentage);

        if (percentage >= 90)
            printf("Grade : A\n");
        else if (percentage >= 80)
            printf("Grade : B\n");
        else if (percentage >= 70)
            printf("Grade : C\n");
        else if (percentage >= 60)
            printf("Grade : D\n");
        else
            printf("Grade : F\n");
    }
    else
    {
        printf("Invalid marks\n");
    }

}
