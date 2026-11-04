#include <stdio.h>
int main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements of array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    int lar = arr[0];
    for (int i = 1; i < size; i++)
    {
        if(lar < arr[i])
            lar = arr[i];
    }
    printf("Largest = %d\n", lar);
    return 0;
}