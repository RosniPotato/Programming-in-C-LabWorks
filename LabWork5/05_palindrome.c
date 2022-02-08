#include <stdio.h>
int main()
{
	int num, rev, rem, org;
	printf("Enter any Integer: ");
	scanf("%d", &num);
	org = num;
	// reversing the given number
	while (num != 0)
	{
		rem = num % 10;
		rev = rev * 10 + rem;
		num /= 10;
	}
	if (rev == org)
	{
		printf("%d is a Palindrome\n", org);
	}
	else
	{
		printf("%d is not a Palindrome\n", org);
	}
	return 0;
}