#include <stdio.h>
#include <stdlib.h>
int check(char *str)
{
	int i = 0;
	while (str[i++] != '\0')
	{
		if (str[i] == '.')
		{
			break;
			return 1;
			// this will return true to the function
		}
	}
}
void main()
{
	float m, n;
	int x, y;
	char inp_1[10], inp_2[10];
	printf("Enter length...");
	scanf("%s", &inp_1);
	printf("Enter breadth...");
	scanf("%s", &inp_2);
	if (check(inp_1) || check(inp_2))
	{
		m = atof(inp_1);
		n = atof(inp_2);
		float area, perimeter;
		area = m * n;
		perimeter = 2 * (m + n);
		printf("The area is %f\n", area);
		printf("The perimeter is %f", perimeter);
	}
	else
	{
		x = atoi(inp_1);
		y = atoi(inp_2);
		int area, perimeter;
		area = x * y;
		perimeter = 2 * (x + y);
		printf("The area is %d\n", area);
		printf("The perimeter is %d", perimeter);
	}
}
