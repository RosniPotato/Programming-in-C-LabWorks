#include <stdio.h>
int main()
{
	int hours, pay, additionalpay;
	printf("Enter how many hours you worked?: ");
	scanf("%d", &hours);
	if (hours > 0 && hours <= 8)
	{
		pay = hours * 100;
		printf("You will get Rs: %d", pay);
	}
	if (hours > 8)
	{
		additionalpay = 800 + (hours - 8) * 120;
		printf("You will get Rs : %d", additionalpay);
	}
	return 0;
}
