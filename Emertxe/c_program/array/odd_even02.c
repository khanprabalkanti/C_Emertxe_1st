#include <stdio.h>
int main()
{
    int size, odd = 0, even = 0;
    printf("Enter size: ");
    scanf("%d", &size);
    int arr[size], arr1[size], arr2[size];
    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2)
        {
            arr1[odd] = arr[i];
            odd++;
        }
        else
        {
            arr2[even] = arr[i];
            even++;
        }
    }
    printf("Odd Elemetns:\n");
    for (int i = 0; i < odd; i++)
    {
        printf("%d\n", arr1[i]);
    }
    printf("Even Elemetns:\n");
    for (int i = 0; i < even; i++)
    {
        printf("%d\n", arr2[i]);
    }

    return 0;
}