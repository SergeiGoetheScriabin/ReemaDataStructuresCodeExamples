#include <stdio.h>


//https://www.tutorialspoint.com/cprogramming/switch_statement_in_c.htm// //documentation for switch statement//
int main()
{

	char ch;
	printf("\n Enter any character: ");
	scanf("%c", &ch);
	switch(ch)
	{
	
		case 'A':
		case 'a':
			printf("\n % c is a VOWEL", ch);
			break;
		case 'E':
		case 'e':
			printf("\n % c is a VOWEL", ch);
			break;
		case 'I':
		case 'i':
			printf("\n % c is a VOWEL", ch);
			break;
		case 'O':
		case 'o':
			printf("\n % c is a VOWEL", ch);
			break;
		case 'U':
		case 'u':
			printf("\n % c is a VOWEL", ch);
			break;
		default: printf("%c is not a vowel", ch);
	}
	return 0;
}

