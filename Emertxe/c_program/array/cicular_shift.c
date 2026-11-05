#include <stdio.h>
int main()
{
    int size, temp, n;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements of array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter time of shift: ");
    scanf("%d", &n);
    for (int j = 0; j < n % size; j++)
    {
        temp = arr[0];
        for (int i = 0; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[size - 1] = temp;
    }
    printf("Output of array elements:\n");
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] -> %d\n", i, arr[i]);
    }
    return 0;
}
