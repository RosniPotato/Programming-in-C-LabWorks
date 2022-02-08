#include <stdio.h>
int main()
{
	int n, i, j, c;
	printf("How many number you want in array?\n");
	scanf("%d", &n);
	int a[n];
	printf("\nEnter the numbers: \n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])
			{
				c = a[j];
				a[j] = a[i];
				a[i] = c;
			}
		}
	}
	printf("Sorting in Decending Order:\n");
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	return 0;
}
