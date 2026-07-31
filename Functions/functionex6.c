// write a two functions one to find the total and one to find the average of 3 subject marks//

#include <stdio.h>
int total(int a, int b, int c)
{
    return a + b + c;
}

float average(int a)
{
    return a / 3.0;

}

int main()
{
    int m1, m2, m3, t;
    float avg;

    printf("Enter marks of Subject 1: ");
    scanf("%d", &m1);

    printf("Enter marks of Subject 2: ");
    scanf("%d", &m2);

    printf("Enter marks of Subject 3: ");
    scanf("%d", &m3);

    t = total(m1, m2, m3);
    avg = average(t);

    printf("Total = %d\n", t);
    printf("Average = %f", avg);

}
