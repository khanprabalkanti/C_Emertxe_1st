#include<stdio.h>
int main()
{
    int arr[10] = {1, 2, 3, 4, 5};
    for(int i = 0; i < 10; i++)
    {
        printf("&arr -> %p\n", &arr[i]);
        printf("&arr -> %d\n", arr[i]);
    }
    printf("&arr -> %lu\n", sizeof(arr[10]));
    return 0;
}