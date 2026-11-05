#include<stdio.h>
int main()
{
    int size, count = 0, sum = 0;
    printf("Enter array size: ");
    scanf("%d", &size);
    if(size < 1)
    {
        printf("Invalid input\n");
        return 1;
    }
    int arr[size];
    printf("Enter array elements: ");
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < size; i++)
    {
        if(arr[i] % 2)
	{
	    arr[i] = 0;
	}
	else
	{
	    arr[i] = 1;
	}
    }
    for(int i = 0; i < size; i++)
    {
        if(arr[i])
            count++;
    }
    printf("Binary: \n");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    if(count % 2)
    {
        printf("Odd parity\n");
    }
    else
    {
        printf("Even parity\n");
    }
    for(int i = 0; i < size; i++)
    {
        sum = sum * 2 + arr[i];
    }
    printf("Decimal: %d\n", sum);
    return 0;
}
