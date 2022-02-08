#include <stdio.h>

int main()
{
	float celcius, farenheit;
	printf("Enter temperature in farenheit : ");
	scanf("%f", &farenheit);
	celcius = (farenheit - 32) * 5 / 9;
	printf("The temperature in celcius is : %0.2f", celcius);
	return 0;
}
