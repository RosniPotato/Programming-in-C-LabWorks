#include <stdio.h>
int main()
{
	float salary, dear_allowance, house_rent, gross_salary;
	printf("Sreyan what is your salary?");
	scanf("%f", &salary);
	dear_allowance = 40 * salary / 100;
	house_rent = 20 * salary / 100;
	gross_salary = salary + (dear_allowance + house_rent);
	printf("Sreyan your gross salary is %0.2f : ", gross_salary);
	return 0;
}
