#include <stdio.h>
int main()
{
    int size, target;
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
        int sum = arr[i];
        for(int j = 0; j < size; j++)
        {
            if(i == j || target < arr[j])
            {
                continue;
            }
            sum += arr[j];
            if(sum == target)
            {
                printf("Found = > %d %d\n", j, i);
                break;
            }
            else if(sum > target)
            {
                sum -= arr[j];
            }
        }
    }
    return 0;
}