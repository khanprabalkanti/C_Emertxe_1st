#include <stdio.h>
int main()
{
    int size, sum = 0, count = 0;
    printf("Enter array size: ");
    if (scanf("%d", &size) != 1 || size < 1)
    {
        printf("Invalid input.\n");
        return 1;
    }
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    int temp1 = 0, temp2 = arr[0];
    for (int i = 0; i < size - 1; i++)
    {
        printf("sum = %d\n", sum = sum - arr[i]);
        printf("temp1 = %d\n", temp1 = sum - temp2);
        if (temp1 % 2)
            count++;
        ;
        printf("temp2 = %d\n", temp2 = temp2 + arr[i + 1]);
    }
    printf("%d\n", count);
    return 0;
}