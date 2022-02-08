#include <stdio.h>
int main()
{
	int sales, commission = 0, b;
	printf("How much did you made on your sale ?:");
	scanf("%d", &sales);
	if (sales >= 5000 && sales <= 20000)
	{
		commission = 0.05 * sales;
		printf("your commission is %d", commission);
	}
	else if (sales > 20000 && sales < 50000)
	{
		commission = 0.1 * sales;
		printf("your commission is %d", commission);
	}
	else if (sales >= 50000)
	{
		commission = 0.2 * sales;
		printf("your commission is %d", commission);
	}
	return 0;
}
