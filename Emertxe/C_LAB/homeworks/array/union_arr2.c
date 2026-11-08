#include <stdio.h>

void bubble_sort(int size, int arr[size]);
void print_arr(int size, int arr[size]);
void input_elements(int size, int arr[size]);
void union_arr(int size, int arr[size]);

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
    input_elements(size, arr1);
    bubble_sort(size, arr1);
    printf("Array1 after sorted: ");
    print_arr(size, arr1);
    printf("Enter array2 elements: ");
    input_elements(size, arr2);
    bubble_sort(size, arr2);
    printf("Array1 after sorted: ");
    print_arr(size, arr2);

    int merge_arr[2 * size];
    for (int i = 0; i < size; i++)
    {
        merge_arr[i] = arr1[i];
    }
    for (int i = 0; i < size; i++)
    {
        merge_arr[size + i] = arr2[i];
    }
    printf("Merged Array: ");
    print_arr(2 * size, merge_arr);
    bubble_sort(2 * size, merge_arr);
    printf("Merged Array after sorted: ");
    print_arr(2 * size, merge_arr);

    union_arr(size * 2, merge_arr);
    

    return 0;
}
void input_elements(int size, int arr[size])
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void bubble_sort(int size, int arr[size])
{
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

void union_arr(int size, int arr[size])
{
    int union_arr[size], index = 0;
    for(int i = 0; i < size - 1; i++)
    {
        if(arr[i] == arr[i + 1])
        {
            continue;
        }
        union_arr[index++] = arr[i];//Problem* it doesnt print the last value..******
    }
    printf("Union : ");
    print_arr(index, union_arr);
}