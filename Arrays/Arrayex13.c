//read a matrix and find its largest element//

#include<stdio.h>
int main()
{
    int a[3][3], i, j, largest;
    printf("Enter matrix elements:\n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    largest = a[0][0];

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(a[i][j] > largest)
            {
                largest = a[i][j];
            }
        }
    }

    printf("Largest element = %d", largest);

}
