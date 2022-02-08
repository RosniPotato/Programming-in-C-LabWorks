#include <stdio.h>

int main()
{
	int number, a, b, c, sum;
	printf("Enter a three digit number : ");
	scanf("%d", &number);
	a = number % 10;
	number = number / 10;
	b = number % 10;
	number = number / 10;
	c = number % 10;
	number = number / 10;
	sum = a + b + c;
	printf("The sum of three digit is : %d", sum);
	return 0;
}
