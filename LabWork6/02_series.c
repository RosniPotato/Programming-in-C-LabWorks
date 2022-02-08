#include <stdio.h>
#include <math.h>
int main()
{
	int i = 1, term, seri2, seri3, seri4, seri5;
	printf("Enter The Number of Terms: \n");
	scanf("%d", &term);
	printf("Series 1: ");
	while (i <= term)
	{
		printf("%d\t", i); // opperation for 1st series
		i++;
	}
	i = 1; // resetting the value of 'i' after completion of loop
	printf("\nSeries 2: ");
	while (i <= term)
	{
		seri2 = pow(i, 2);
		printf("%d\t", seri2); // opperation for 2nd series
		i++;
	}
	i = 0;
	printf("\nSeries 3: ");
	while (i <= term)
	{
		seri3 = pow(2, i);
		printf("%d\t", seri3);
		i++;
	}
	i = 0;
	printf("\nSeries 4: ");
	while (i <= term)
	{
		seri4 = pow(3, i);
		printf("%d\t", seri4);
		i++;
	}
	i = 0;
	printf("\nSeries 5: ");
	while (i <= term)
	{
		seri5 = 3 * pow(i, 2);
		printf("%d\t", seri5);
		i++;
	}
	printf("\n");
	return 0;
}