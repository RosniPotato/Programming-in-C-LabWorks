#include <stdio.h>
int main()
{
	int merit[20] = {7001, 7002, 7003, 7004, 7005, 7006, 7007, 7008, 7009, 7010, 7011, 7012, 7013, 7014, 7015, 7016,
					 7017, 7018, 7019, 7020};
	int syml, i, result = 0;
	printf("Enter your symbol number :");
	scanf("%d", &syml);
	for (i = 0; i <= 19; i++)
	{
		if (merit[i] == syml)
		{
			printf("You passed!\n");
			result = 1;
			break;
		}
	}
	if (result == 0)
	{
		printf("You failed!\n");
	}
	return 0;
}
