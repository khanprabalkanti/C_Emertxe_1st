#include <stdio.h>
int main()
{
    int size;
    printf("Enter array size: ");
    if (scanf("%d", &size) != 1 || size < 1)
    {
        printf("Invalid input.\n");
        return 1;
    }
    char arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf(" %c", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= 'A' && arr[i] <= 'Z')
        {
            arr[i] = arr[i] + 32;
        }
        else if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            arr[i] = arr[i] - 32;
        }
    }
    printf("Outpur: \n");
    for(int i = 0; i < size; i++)
    {
        printf("%c ", arr[i]);
    }
    printf("\n");
    return 0;
}