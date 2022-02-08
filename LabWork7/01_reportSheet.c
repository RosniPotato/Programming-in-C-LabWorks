#include <stdio.h>
int main()
{
	int marks[5];
	int i, total;
	float percentage;
	printf("Enter the marks in 5 subjects: \n");
	for (i = 0; i <= 4; i++)
	{
		scanf("%d", &marks[i]);
	}
	for (i = 0; i <= 4; i++)
	{
		total = total + marks[i];
	}
	percentage = (float)total * 100 / 500;
	printf("Total: %d\n", total);
	printf("Percentage: %0.2f%%", percentage);
	return 0;
}