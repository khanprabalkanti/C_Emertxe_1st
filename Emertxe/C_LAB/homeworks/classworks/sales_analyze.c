#include <stdio.h>
int main()
{
    int count = 0;
    float arr[7], sum = 0;
    printf("Enter Sales for 7 days: ");
    for(int i = 0; i < 7; i++)
    {
        if(scanf("%f", &arr[i]) != 1 || arr[i] < 0)
        {
            printf("Invalid Input!\n");
            return 1;
        }
        sum += arr[i];
    }
    float lar = arr[0], small = arr[0], avg;
    avg = (float)sum / 7;
    for(int i = 0; i < 7; i++)
    {
        if(arr[i] > lar)
            lar = arr[i];
        if(arr[i] < small)
            small = arr[i];
        if(arr[i] > avg)
            count++;
    }
    printf("Total Sales: %.2f\nHighest Sale: %.2f\nAverage Sale: %.2f\nLowest Sale: %.2f\nDays above average: %d\n", sum, lar, avg, small, count);
    return 0;
}