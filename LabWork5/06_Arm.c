#include <stdio.h>
#include <math.h>
int main()
{
	int num, arm = 0, org, rev;
	printf("Enter a three digits number : ");
	scanf("%d", &num);
	org = num;
	while (num > 0)
	{
		rev = num % 10;
		num = num / 10;
		arm = arm + pow(rev, 3);
	}
	if (arm == org)
	{
		printf("The number is Armstrong\n");
	}
	else
	{
		printf("The number is not Armstrong\n");
	}
	return 0;
}
