#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter array elements: ");
    for(int i = 0; i < size; i++)
    {   
        scanf("%d", &arr[i]);
    }
    int smallest = arr[0];
    for(int i = 0; i < size; i++)
    {
        if(smallest > arr[i])
        {
            smallest = arr[i];
        }
    }

    printf("Smallest Number is: %d\n", smallest);
    return 0;
}