#include <stdio.h>

int main()
{
	int n, a, b, c, final;
	printf("enter three digit number : ");
	scanf("%d", &n);			  // 125/10 = 12.5
	a = n % 10;					  // 5
	n = n / 10;					  // 125/10 12.5
	b = n % 10;					  // 12%10 = 1.2=2
	n = n / 10;					  // 12/10=1
	c = n % 10;					  // 1
	final = a * 100 + b * 10 + c; // 500+20+1=521
	printf("The reverse order is %d", final);
	return 0;
}
