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
        if (!flag)
            printf("%d\t", arr[i]);
    }
    printf("\n");
    return 0;
}