#include <stdio.h>

void bubble_sort(int size, int arr[size]);
void print_arr(int size, int arr[size]);

int sorting(int size);

int main()
{
    int size, count = 0;
    printf("Enter array size: ");
    if (scanf("%d", &size) != 1 || size < 1)
    {
        printf("Invalid input.\n");
        return 1;
    }
    int arr1[size], arr2[size];

    printf("Enter array1 elements: ");
    bubble_sort(size, arr1);
    print_arr(size, arr1);
    printf("Enter array2 elements: ");
    bubble_sort(size, arr2);
    print_arr(size, arr2);

    for(int i = 0; i < size; i++)
    {
        if(arr1[i] == arr2[i])
        {
            count++;
        }
    }

    if(count == size)
    {
        printf("Arrays are Anagrams.\n");
    }
    else
    {
        printf("Arrays are not Anagrams.\n");
    }

    return 0;
}

void bubble_sort(int size, int arr[size])
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size - 1; i++)
    {
        int temp;
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void print_arr(int size, int arr[size])
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}