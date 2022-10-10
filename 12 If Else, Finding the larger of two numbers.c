#include <stdio.h>

main()
{
	int a, b, large;
	printf("\n Enter the value of a and b : ");
	scanf("%d %d", &a, &b);
	if(a>b) 
		large = a;
	else 
		large = b;
		
	printf("\n LARGE = %d", large);
	return 0;
}

