//to print a hailstone series
#include <stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("The Hailstone series is: \n");
	while (n > 1)
	{
		if (n % 2 == 0)
		{
			n = n / 2;
			printf("%d\t", n);
		}
		else if (n % 2 != 0 && n != 1)
		{
			n = 3 * n + 1;
			printf("%d\t", n);
		}
	}
	printf("\n");
	return 0;
}
