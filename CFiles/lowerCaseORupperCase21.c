#include <stdio.h>
#include <conio.h>

// Write a program to take input from the user and then check whether it is a number or a character. //
	// If it is a character, then determine whether it is UPPERCASE or lowercase //
	
int main()
{
	char ch;
	printf("\n Enter any character : ");
	scanf("%c", &ch);
	if(ch >='A' && ch<='Z')
		printf("\n Upper case character was entered");
	if(ch >='a' && ch<='z')
		printf("\n Lower case character was entered");
	else if(ch>='0' && ch<='9')
		printf("\n You entered a number");
	return 0;
}

