#include<stdio.h>

main()
{

int marks;
printf("\n Enter the marks obatined : ");
scanf("%d", &marks);
if (marks >= 75)
	printf("\n FIRST DIVISION");
else if (marks >= 60 && marks <75)
	printf("\n SECOND DIVISION");
else if (marks >= 50 && marks < 60)
	printf("\n THIRD DIVISION");
else if (marks >= 40 && marks < 50)
	printf("\n FOURht DIVISION");
else
	printf("\n Exiting");
return 0;

}

