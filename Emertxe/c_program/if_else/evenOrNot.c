/*
Description: Program to check whether a number is even or odd using if-else.
Date and Day: 14-10-2026, Wednesday
Sample I/P: 7
Sample O/P: Odd number
 */
#include <stdio.h>
int main(){
	int num;
	scanf("%d", &num);
	if(num % 2)
	{
		printf("Odd number\n");
	}
	else{
			
		printf("Even number\n");
	}
	return 0;
}
