#include <stdio.h>
int main()
{
	int number, sum, first, last;
	printf("Enter 4 digits number : ");
	scanf("%d", &number);
	first = number / 1000;
	last = number % 10;
	sum = first + last;
	printf("Sum of first and last number is : %d", sum);
	return 0;
}
