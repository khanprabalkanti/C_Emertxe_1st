#include <stdio.h>
int check_element(int size, int size2, int arr[size], int arr2[size2]);
void bubble_sort(int size, int arr[size]);
void print_arr(int size, int arr[size]);

int sorting(int size);

int main()
{
    int arr1[4], arr2[6];

    printf("Enter array1 elements: ");
    bubble_sort(4, arr1);
    print_arr(4, arr1);
    printf("Enter array2 elements: ");
    bubble_sort(6, arr2);
    print_arr(6, arr2);

    if(check_element(4, 6, arr1, arr2) == 4)
        printf("All elements are present.\n");
    else
        printf("All elements are not present.\n");
        

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

int check_element(int size, int size2, int arr[size], int arr2[size2])
{
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size2; j++)
        {
            if(arr[i] == arr2[j])
            {
                count++;
            }
        }
    }
    return count;
}