#include <stdio.h>
int main()
{
    float consumed, data = 2048;
    printf("Enter consumed data: ");
    if (scanf("%f", &consumed) != 1 || consumed < 1 || consumed > 2048)
    {
        printf("Invalid input\n");
        return 1;
    }
    float remaining_mb = data - consumed;
    float remaining_gb = remaining_mb / (data / 2);
    float consumed_percentage = consumed * 100 / data;
    printf("Consumed data       : %.2f %%\n", consumed_percentage);
    printf("Remaining data in MB: %.2f MB\n", remaining_mb);
    printf("Remaining data in GB: %.2f GB\n", remaining_gb);

    return 0;
}