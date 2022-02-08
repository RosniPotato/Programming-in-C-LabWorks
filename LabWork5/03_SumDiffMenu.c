#include <stdio.h>
#include <string.h>
int main()
{
	int a, b;
	char op;
	printf("Enter the operation you want to perform : ");
	scanf("%c", &op);
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	switch (op)
	{
	case '+':
		printf("Sum is %d\n", a + b);
		break;
	case '-':
		printf("Difference is %d\n", a - b);
		break;
	default:
		printf("You pressed Wrong Opperation!\n");
		break;
	}
	return 0;
}
