#include <stdio.h>
int main()
{
    int size;
    printf("Enter array size: ");
    if(scanf("%d", &size) != 1 || size < 1)
    {
        printf("Invalid input\n");
        return 1;
    }
    int arr[size];
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < size; i++)
    {
        int digit, lar = 0, small = 9;
        while(arr[i])
        {
            digit = arr[i] % 10;
            if(digit < 0)
            {
                digit = -digit;
            }
            if(digit > lar)
            {
                lar = digit;
            }
            if(digit < small)
            {
                small = digit;
            }
            arr[i] /= 10;
        }
        printf("L = %d, S = %d\n", lar, small);
    }
    return 0;
}