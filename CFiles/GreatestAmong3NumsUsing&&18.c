#include <stdio.h>
#include <conio.h>

// Write a program to find the largest of three numbers using && operator

int main()
{
	int num1, num2, num3;
	printf("\n Enter the first number : " );
	scanf("%d", &num1);
	printf("\n Enter the second number : ");
	scanf("%d", &num2);
	printf("\n Enter the third number : ");
	scanf("%d", &num3);
	
	if(num1>num2 && num1>num3)
		printf("\n %d is the largest number", num1);
	if(num2>1 && num2>num3)
		printf("\n %d is the largest number", num2);
	else
		printf("\n %d is the largest number", num3);
	getch();
	return 0;
}
	

