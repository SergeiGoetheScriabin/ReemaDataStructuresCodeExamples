#include <stdio.h>
#include <conio.h>


// Write a program to find the greatest among three numbers. //

int main()

{
	int num1, num2, num3, big=0;
	printf("\n Enter the first number : ");
	scanf("%d", &num1);
	printf("\n Enter the second number : ");
	scanf("%d", &num2);
	printf("\n Enter the third number : ");
	scanf("%d", &num3);
	if(num1>num2)
	{
	if(num1>num3)
		printf("\n %d is greater than %d and %d", num1, num2, num3);
	else
		printf("\n %d is greater than %d and %d", num3, num1, num2);
	}
	else if(num2>num3)
		printf("\n %d is greater than %d and %d", num2, num1, num3);
	else
		printf("\n %d is greater than %d and %d", num3, num1, num2);
	return 0;
}

