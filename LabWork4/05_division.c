#include <stdio.h>
int main()
{
	int i;
	float total, per, marks;
	char division[10];
	for (i = 1; i <= 5; i++)
	{
		printf("Enter your marks obtained in subject :%d ", i);
		scanf("%f", &marks);
		total += marks;
	}
	per = total * 100 / 500;
	printf("Your percentage is %0.2f\n", per);
	if (per >= 40 && per < 50)
	{
		printf("You passed in  third divison.");
	}
	if (per >= 50 && per < 60)
	{
		printf("You passed in  second divison.");
	}
	if (per >= 60 && per < 80)
	{
		printf("You passed in  first divison.");
	}
	if (per >= 80)
	{
		printf("You passed in  distinction");
	}
	return 0;
}
