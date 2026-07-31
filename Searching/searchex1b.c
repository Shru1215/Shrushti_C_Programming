//read the marks of n students and check whether anyone scored exactly 100//
//b.2nd using binary search//

#include <stdio.h>
int main()
{
    int n, marks[100],low, high, mid, found , i;
      found=0;
    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter marks in sorted order:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
    }

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(marks[mid] == 100)
        {
            found = 1;
            printf("Student %d scored exactly 100", mid + 1);
            break;
        }
        else if(marks[mid] < 100)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if(found == 0)
    {
        printf("No student scored 100");
    }

}
