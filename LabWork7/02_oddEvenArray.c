#include <stdio.h>
int main()
{
	int i, num[10];
	printf("Enter 10 numbers in an array: \n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
	}
	printf("Even numbers in an array are:\n");
	for (i = 0; i < 10; i++)
	{
		if (num[i] % 2 == 0)
		{
			printf("%4d", num[i]);
		}
	}
	printf("\nOdd numbers in an array are:\n");
	for (i = 0; i < 10; i++)
	{
		if (num[i] % 2 != 0)
		{
			printf("%4d", num[i]);
		}
	}
	printf("\n");
	return 0;
}