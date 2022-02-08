#include <stdio.h>
void main()
{
	int n, var, i, j;
	printf("Enter the number: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (i % j == 0)
			{
				var = var + 1;
			}
			else if (var > 2)
				break;
		}
		if (var == 2)
		{
			printf("%d\n", i);
		}
		var = 0;
	}
	getch();
}
