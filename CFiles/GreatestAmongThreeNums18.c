#include <stdio.h>
#include <conio.h>


// Write a program to find the largest of three numbers using && operator //

// Extra line of code to see logic pattern //
	// We use else here instead of another if statemnet because it would be more concise then writing: if n1>n2 and n1> n3, if n2>n1 and n2>n3, if n3 > n1 and n3> n2 //


int main()
{
	int num1, num2, num3;
	printf("\n Enter the first number: ");
	scanf("%d", &num1);
	printf("\n Enter the second number: ");
	scanf("%d", &num2);
	printf("\n Enter the third number: ");
	scanf("%d", &num3);
	
	if (num1>num2 && num1>num3)
		printf("\n %d is the largest number", num1);
	if (num2>num1 && num2>num3)
		printf("\n %d is the largest number", num2);
	else
		printf("\n %d is the largest number", num3);
	getch();
	return 0;
}

