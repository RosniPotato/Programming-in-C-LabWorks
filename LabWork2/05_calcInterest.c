#include <stdio.h>
int main()
{
	float p, t, r, i;
	printf("Enter principal : ");
	scanf("%f", &p);
	printf("Enter time : ");
	scanf("%f", &t);
	printf("Enter rate : ");
	scanf("%f", &r);
	i = (p * t * r) / 100;
	printf("Interest is : % 0.2f", i);
	return 0;
}
