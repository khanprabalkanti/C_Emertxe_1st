#include<stdio.h>
int main()
{
    int size, count = 0;
    printf("Enter size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter array elements:\n");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < size; i++)
    {
        if(arr[i] % 2)
            count++;
    }
    printf("Size of even: %d\n", size - count);
    printf("Size of odd: %d\n", count);
    return 0;
}