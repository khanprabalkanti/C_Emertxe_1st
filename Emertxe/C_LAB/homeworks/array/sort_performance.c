#include <stdio.h>

int sorting(int size);

int main()
{
    /* int arr_no;
    printf("Enter array number: ");
    if(scanf("%d", &arr_no) != 1 || arr_no < 1)
    {
        printf("Invalid input.\n");
        return 1;
    } */
    int size;
    printf("Enter array size: ");
    if (scanf("%d", &size) != 1 || size < 1)
    {
        printf("Invalid input.\n");
        return 1;
    }
    /*  for(int i = 0; i < arr_no; i++)
     {
         int arr
     } */
    int arr1_count, arr2_count;
    printf("Enter Array1 elements.\n");
    arr1_count = sorting(size);
    printf("Enter Array2 elements.\n");
    arr2_count = sorting(size);
    printf("Array1 swap count %d\n", arr1_count);
    printf("Array2 swap count %d\n", arr2_count);
    if(arr1_count > arr2_count)
    {
        printf("Array2 took a lower time.\n");
    }
    else
    {
        printf("Array1 took a lower time.\n");
    }
    return 0;
}

int sorting(int size)
{
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int count = 0;
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
                count++;
            }
        }
    }
    return count;
}