#include<stdio.h>
int main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements of array:\n");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Output of array elements:\n");
    for(int i = 0; i < size; i++)
    {
        printf("arr[%d] -> %d\n",i, arr[i]);
    }
    return 0;
}