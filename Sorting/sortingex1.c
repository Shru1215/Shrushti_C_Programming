// Sort an array in ascending order and then search a key using binary search//

#include<stdio.h>
int main()
{
    int a[100], n, i, j, temp, key,low, high, mid, found ;
    found = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
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

    printf("Sorting in ascending order: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("Enter key to search\n: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == key)
        {
            found = 1;
            break;
        }
        else if(key < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if(found)
    {
        printf("Key found at position %d", mid + 1);
    }
    else
    {
        printf("Key not found");
    }
}
