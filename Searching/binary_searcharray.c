#include<stdio.h>

int main()
{
    int a[] = {10,20,30,40,50,60,70,80,90,100};
    int key, found = 0;
    int low = 0, high = 9, mid;

    printf("Enter the element to search: ");
    scanf("%d", &key);

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == key)
        {
            printf("Element found at position %d", mid + 1);
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

    if(found == 0)
    {
        printf("Element not found");
    }

    return 0;
}
