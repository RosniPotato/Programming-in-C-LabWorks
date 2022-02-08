#include <stdio.h>
int main()
{
	int num[10], i, j;
	for (i = 0; i <= 9; i++)
	{
		printf("Enter a number");
		scanf("%d", &num[i]);
	}
	for (j = 0; j <= 9; j++)
	{
		printf("%d\n", num[j]);
	}
	return 0;
}
