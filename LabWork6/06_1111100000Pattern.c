#include <stdio.h>
int main()
{
	int i, j;
	for (i = 1; i <= 6; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			if (i % 2 != 0)
			{
				printf("1"); // for odd
			}
			else if (i % 2 == 0)
			{
				printf("0"); // for even
			}
		}
		printf("\n");
	}
	return 0;
}
