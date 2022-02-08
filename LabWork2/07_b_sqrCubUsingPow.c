// using maths library
#include <stdio.h>
#include <math.h>
int main()
{
	int length, square, cube;
	printf("Enter the length : ");
	scanf("%d", &length);
	square = pow(length, 2);
	cube = pow(length, 3);
	printf("The square of %d is %d \n", length, square);
	printf("The cube of %d is %d", length, cube);
	return 0;
}
