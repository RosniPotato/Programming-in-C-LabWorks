#include <stdio.h>
int main()
{
	int length, square, cube;
	printf("Enter the lenght : ");
	scanf("%d", &length);
	square = length * length;
	cube = length * length * length;
	printf("The square of %d is %d \n", length, square);
	printf("The cube of %d is %d", length, cube);
	return 0;
}
