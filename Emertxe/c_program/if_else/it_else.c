/*
Description: Program to check whether a person is eligible to vote using an if-else statement.
Date and Day: 14-10-2026, Wednesday
Sample I/P: 18
Sample O/P: You can vote
 */
#include <stdio.h>
int main(){
	int age;
	scanf("%d", &age);
	if(age >= 18){
		printf("You can vote\n");
	}
	else{
		printf("You can't vote\n");
	}
	return 0;
}
