/* Sum of first n natural numbers. */
#include <stdio.h>
int sum(int n);
int main(){
    int n;
    printf("%d\n",sum(5));
    return 0;
}
int sum(int n){
    if(n == 1){
        return 1;
    }
    int sumN = sum(n - 1) + n;
    return sumN;
}

/* 
#include <stdio.h>

int sum(int n) {
    printf("Entering sum(%d)\n", n);

    if (n == 1) {
        printf("Base case reached! Returning 1\n");
        return 1;
    }

    int sumNm1 = sum(n - 1);

    printf("sum(%d) received %d from sum(%d)\n",
           n, sumNm1, n - 1);

    int sumN = sumNm1 + n;

    printf("Calculating: %d + %d = %d\n",
           sumNm1, n, sumN);

    printf("Returning %d from sum(%d)\n", sumN, n);

    return sumN;
}

int main() {
    int n = 5;

    printf("Starting recursion with n = %d\n\n", n);

    int result = sum(n);

    printf("\nFinal answer = %d\n", result);

    return 0;
}
 */