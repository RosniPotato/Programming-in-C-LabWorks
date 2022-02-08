#include <stdio.h>
int main()
{
	int length, breadth, area, perimeter, sum, square, choice;
	printf("Enter length:");
	scanf("%d", &length);
	printf("Enter breadth:");
	scanf("%d", &breadth);
	printf("Menu:\n 1: Perimeter\n 2: Area\n 3: Sum of one length and one breadth\n 4: square of one lenghth and square of two breadth\n");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:

		printf("Perimeter is %d", 2 * (length + breadth));
		break;
	case 2:
		printf("Area is %d", length * breadth);
		break;
	case 3:
		printf("Sum of one length and one breadth %d", length + breadth);
		break;
	case 4:
		printf("square of one lenght %d \n and square of two breadth is  %d", length * length, 4 * (breadth * breadth));
	}
	return 0;
}
