// Calculation of area using Macro
#include <stdio.h>
#include <math.h> //header for POW function
#define PI 3.14
// can be called anytime and doesn't take space in memory

int main()
{
	float radius, area;
	printf("Enter radius : ");
	scanf("%f", &radius);
	area = PI * pow(radius, 2);
	printf("The area of circle is : %f", area);
	getch();
	return 0;
}
