#include <stdio.h>
int main()
{
	int days, year, month;
	printf("Enter number of days : ");
	scanf("%d", &days);
	year = days / 365;					   // this will not take decimal.
	month = (days - year * 365) / 30;	   // 396-1*365=31 31/30=1  m =1
	days = days - year * 365 - month * 30; // 396-1*365-1*30 =1
	printf("Year : %d \n Month : %d \n days = %d", year, month, days);
	return 0;
}
