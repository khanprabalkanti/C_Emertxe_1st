#include <stdio.h>
int main()
{
    int size, sum = 0;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements of array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Output of array elements:\n");
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    printf("Average = %g\n", (float)sum / size);
    return 0;
}