#include <stdio.h>
#include <math.h>
int main()
{
	float num, squareroot;
again:
	printf("Enter a number: ");
	scanf("%f", &num);
	if (num >= 0)
	{
		squareroot = sqrt(num);
		printf("Square Root is: %0.2f\n", squareroot);
	}
	else
	{
		printf("You've entered a negative number.\nTry again!\n");
		goto again;
	}
	return 0;
}
