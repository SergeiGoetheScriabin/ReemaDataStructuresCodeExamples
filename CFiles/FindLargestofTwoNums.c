#include <stdio.h>
#include<conio.h>
#include<stdio.h>

// Write a program to find the largest of two numbers using a ternary operator //

int main()
{
	int num1, num2, large;
	printf("Enter the first number: ");
	scanf("%d", &num1);
	printf("Enter the second number: ");
	scanf("%d", &num2);
	
	large = num1>num2?num1:num2;
	printf("\n The largest number is %d", large);
	return 0;
}

