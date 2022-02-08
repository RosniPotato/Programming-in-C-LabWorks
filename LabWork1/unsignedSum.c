#include <stdio.h>
int main()
{
	unsigned int firstNumber, secondNumber, sum;
	printf("Enter first number: ");
	scanf("%u", &firstNumber);
	printf("Enter second number: ");
	scanf("%u", &secondNumber);
	sum = firstNumber + secondNumber;
	printf("The sum of two given number is %u", sum);

	return 0;
}
