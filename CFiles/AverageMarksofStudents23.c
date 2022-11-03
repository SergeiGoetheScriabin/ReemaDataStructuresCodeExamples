#include <stdio.h>
#include <conio.h>


//Program to display average of marks obtained by students//
	// There is a small bug in this code, can you debug it?//

int main()
{
	int marks1, marks2, marks3, marks4, total = 0;
	float avg = 0.0;
	
	printf("\n Enter the marks in Mathematics: ");
	scanf("%d", &marks1);
	printf("\n Enter the marks in Science: ");
	scanf("%d", &marks2);
	printf("\n Enter the marks in History: ");
	scanf("%d", &marks3);
	printf("\n Enter the marks in Programming: ");
	scanf("%d", &marks4);
	total = marks1 + marks2 + marks3 + marks4;
	avg = (float) total/4;
	printf("\n Total = %d", total);
	printf("\n Aggregate = %f", avg);
	if(total&&avg >= 75)
		printf("\n DISCTINTION");
	if(avg >=60 && avg<75)
		printf("\n FIRST DIVISION");
	if(avg>=50 && avg<60)
		printf("\n SECOND DIVSION");
	if(avg>=40 && avg<50)
		printf("\n THIRD DIVISION");
	else
		printf("\n FAIL");
	return 0;
}

