#include <stdio.h>
int main()
{
	int i, j, lower, upper, multiplication;
	char choice;
	printf("What do you want to print\n"
		   "\ta: Display multiplication table of 7 from 1 to 10.\n \t"
		   "b: Ask for lower and upper range to show table of 8. \n \t"
		   "c: Ask for lower, upper range and multiplication table number and display the result.\n \t"
		   "d: Exit\n");
		   printf("Enter Your Choice: ");
	scanf("%c", &choice);
	switch (choice)
	{
	case 'a':
		for (i = 1; i <= 10; i++)
		{
			printf("7 * %d = %d\n", i, i * 7);
		}
		break;
	case 'b':
		printf("What do you want lower range to be :");
		scanf("%d", &lower);
		printf("What do you want upper range to be :");
		scanf("%d", &upper);
		while (lower <= upper)
		{
			printf("8 * %d = %d\n", lower, lower * 8);
			lower += 1;
		}
		break;
	case 'c':

		printf("What do you want lower range to be :");
		scanf("%d", &lower);
		printf("What do you want upper range to be :");
		scanf("%d", &upper);
		printf("What do you want to be the multiplication number :");
		scanf("%d", &multiplication);
		for (i = lower; i <= upper; i++)
		{
			printf("%d * %d = %d\n", multiplication, i, i * multiplication);
		}
	case 'd':
		printf("Program Exited!\n");
	}
	return 0;
}
