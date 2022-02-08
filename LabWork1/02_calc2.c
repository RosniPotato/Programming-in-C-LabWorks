#include <stdio.h>

int main()
{
	int number, sum, cal, i;
	printf("enter three digit number : ");
	scanf("%d", number);
	while (i < 3)
	{
		cal = number % 10;
		sum = sum + cal;
		number = number / 10; // doesn't take decimal
		i++;
	}
	printf("The sum of three digit is %d", sum);
	return 0;
}
