#include <stdio.h>
int main()
{
	int n, i, b;
	printf("How many number you want in array?\n");
	scanf("%d", &n);
	int a[n];
	b = a[0];
	printf("Enter the numbers: \n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++)
	{
		if (b > a[i])
		{
			b = a[i];
		}
	}
	printf("The smallest is %d\n", b);
}
