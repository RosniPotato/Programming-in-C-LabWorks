#include <stdio.h>
int main()
{
	int n, i;
	printf("How many numbers do you want to enter : ");
	scanf("%d", &n);
	int num[n], sum = 0;
	for (i = 0; i < n; i++)
	{
		printf("Enter a number : ");
		scanf("%d", &num[i]);
	}
	for (i = 0; i < n; i++)
	{
		if (num[i] > 10)
		{
			sum = sum + num[i];
		}
	}
	printf("The sum of numbers greater than 10 is %d", sum);
}
