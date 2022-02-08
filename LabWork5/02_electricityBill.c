#include <stdio.h>
int main()
{
	int unit, charge;
	printf("Enter units consumed :");
	scanf("%d", &unit);
	if (unit <= 200)
	{
		charge = unit * 40;
		printf("Charge : %d", charge);
	}
	else if (unit > 200 && unit <= 300)
	{
		charge = 200 * 40 + (unit - 200) * 50;
		printf("Charge is :%d", charge);
	}
	else
	{
		charge = 200 * 40 + 100 * 50 + (unit - 200 - 100) * 60;
		printf("Charge is : %d", charge);
	}
	return 0;
}
