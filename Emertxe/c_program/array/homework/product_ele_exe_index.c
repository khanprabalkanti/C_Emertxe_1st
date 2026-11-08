#include <stdio.h>
int main()
{
    int size, prod = 1, zero = 0;
    printf("Enter array size: ");
    scanf("%d", &size);
    int arr1[size], arr2[size];
    printf("Enter array elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < size; i++)
    {
        if(arr1[i])
        {
            prod *= arr1[i];
        }
        else
        {
            zero++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if(zero == 0)
        {
            arr2[i] = prod / arr1[i];
        }
        else if(zero == 1)
        {
            arr2[i] = arr1[i] == 0 ? prod : 0;
        }
        else
        {
            arr2[i] = 0;
        }
    }
    printf("Modified Array : ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr2[i]);
    }
        return 0;
}