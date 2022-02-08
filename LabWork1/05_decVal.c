#include <stdio.h>

void main()
{
	float firstNumber, secondNumber, thirdNumber, sum;
	printf("Enter first number : ");
	scanf("%f", &firstNumber);
	printf("Enter second number : ");
	scanf("%f", &secondNumber);
	printf("Enter third number : ");
	scanf("%f", &thirdNumber);
	sum = firstNumber + secondNumber + thirdNumber;
	printf("The sum of three number is %0.2f", sum); // 0.2 gives decimal values upto second decimal place
}
