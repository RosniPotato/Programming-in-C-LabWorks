//to print a Pascal triangle
#include <stdio.h>
int main()
{
	int row, clm, spc, n, noRow;
	printf("Enter your desired rows: ");
	scanf("%d", &noRow);
	for (row = 0; row < noRow; row++)
	{
		for (spc = 0; spc < (noRow - row); spc++)
		{
			printf(" ");
		}
		n = 1;
		for (clm = 0; clm <= row; clm++)
		{
			printf("%d ", n);
			n = n * (row - clm) / (clm + 1);
		}
		printf("\n");
	}
	return 0;
}
