#include <stdio.h>
int main()
{
    int size, target, flag = 1;
    printf("Enter array size: ");
    scanf("%d", &size);
    printf("Enter array elements: \n");
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter target: ");
    scanf("%d", &target);
    for(int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
           if(arr[i] + arr[j] == target)
           {
            printf("arr[%d] + arr[%d] => %d + %d\n", i, j, arr[i], arr[j]);
            flag = 0;
            break;
           }
        }
    }
    if(flag)
    {
        printf("Not found\n");
    }
    return 0;
}