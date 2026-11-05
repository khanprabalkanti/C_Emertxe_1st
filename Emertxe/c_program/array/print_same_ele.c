#include <stdio.h>
int main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements of array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        int flag = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                flag++;
                break;
            }
        }
        if (flag)
            continue;
        int count = 1;
        for (int j = j + 1; j < size; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }
        printf("%d -> %d\n", arr[i], count);
    }
    printf("\n");
    return 0;
}