#include <stdio.h>

int main()
{
	float celcius, farenheit;
	printf("Enter temperature in celcius : ");
	scanf("%f", &celcius);
	farenheit = ((9 * celcius) / 5) + 32;
	printf("The temperature in farenheit is : %0.2f", farenheit);
	return 0;
}
