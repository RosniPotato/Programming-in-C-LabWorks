#include <stdio.h>
int main()
{
	int marks;
	printf("Enter marks in C programming:");
	scanf("%d", &marks);
	if (marks < 40)
	{
		printf("You failed");
	}
	if (marks >= 40 && marks < 50)
	{
		printf("Third division");
	}
	if (marks >= 50 && marks < 60)
	{
		printf("Second division");
	}
	if (marks >= 60 && marks < 80)
	{
		printf("First division");
	}
	if (marks >= 80)
	{
		printf("Excellent");
	}
	return 0;
}
