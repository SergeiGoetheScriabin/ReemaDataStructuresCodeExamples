#include<stdio.h>

int main()
{
	float f_num;
	int i_num;
	printf("\n Enter any floating point number: ");
	scanf("%f", &f_num);
	i_num = (int)f_num;
	printf("\n The integer variant of %f is = %d", f_num, i_num);
	return 0;
}

