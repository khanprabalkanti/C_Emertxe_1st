#include <stdio.h>

int sorting(int size);

int main()
{
    int size;
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
    int flag = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            flag++;
        }
    }
    if (flag)
        printf("The array is not in ascending order.\n");
    else
        printf("The array is in ascending order.\n");

    return 0;
}