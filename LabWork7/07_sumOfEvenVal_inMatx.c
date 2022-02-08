#include <stdio.h>
int main()
{
	int i, j, sum;
	int num[3][3];
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("What do you want in the position (%d,%d): ", i + 1, j + 1);
			scanf("%d", &num[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (num[i][j] % 2 == 0)
			{
				sum = sum + num[i][j];
			}
		}
	}
	printf("The sum of even values in 3*3 matrix is: %d\n", sum);
}
