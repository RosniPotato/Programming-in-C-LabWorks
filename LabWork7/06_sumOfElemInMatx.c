#include <stdio.h>
int main()
{
	int num[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int i, j, sum = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			sum = sum + num[i][j];
		}
	}
	printf("The sum of all elements of 3*3 matrix is: %d", sum);
}
