#include<stdio.h>
int main()
{
    int size, index = 0, sum = 0;
    printf("Enter array size: ");
    scanf("%d", &size);
    int arr1[size], arr2[size];
    printf("Enter array elements: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for(int i = 0; i < size; i++)
    {
        if(arr1[i] == index)
        {
            continue;
        }
        sum += arr1[i];
        if()
        {

        }
    }
    return 0;
}