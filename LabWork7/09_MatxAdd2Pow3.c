#include <stdio.h>
#include <math.h>
int main()
{
	int i, j, sum, m, n, power;
	printf("How many elements do you want in rows : ");
	scanf("%d", &m);
	printf("How many elements do you want in column : ");
	scanf("%d", &n);
	int num[m][n];
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("What do you want in the position (%d,%d): ", i + 1, j + 1);
			scanf("%d", &num[i][j]);
		}
		printf("\n");
	}
	printf("\nThe matrix after incrementing it's elements by 2 is : \n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%4d", num[i][j] + 2);
		}
		printf("\n");
	}
	printf("\nThe matrix after raising power by 3 is : \n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			power = pow(num[i][j], 3);
			printf("%4d", power);
		}
		printf("\n");
	}
	return 0;
}
