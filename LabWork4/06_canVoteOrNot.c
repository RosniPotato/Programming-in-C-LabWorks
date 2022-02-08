#include <stdio.h>
int main()
{
	int birth, age;
	printf("Enter your Birth Year: ");
	scanf("%d", &birth);
	age = 2021 - birth;
	printf("You are %d years old and ", age);
	if (age >= 18)
	{
		printf("You can Vote!\n");
	}
	else
	{
		printf("You can not Vote!\n");
	}
	return 0;
}
