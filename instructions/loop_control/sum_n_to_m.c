/* Calculate the sum of all numbers between n to m. */
#include <stdio.h>
int main(){
    int n, m, sum = 0;
    printf("Enter number n to m: ");
    scanf("%d %d", &n, &m);
    for(int i = n; i <= m; i++){
        sum += i;
    }
    printf("The sum of %d to %d is: %d\n", n, m, sum);
    return 0;
}