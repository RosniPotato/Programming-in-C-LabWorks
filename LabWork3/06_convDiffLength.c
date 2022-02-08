#include <stdio.h>
int main()
{
	int km, m, feet, cm, inch;
	printf("Enter the distance in km : ");
	scanf("%d", &km);
	m = km * 1000;
	feet = m * 3.28;
	cm = m * 100;
	inch = 12 * feet;
	printf("Meter %d \n", m);
	printf("Feet : %d \n", feet);
	printf("Inch : %d \n", inch);
	printf("Centimeter : %d \n", cm);
	return 0;
}
