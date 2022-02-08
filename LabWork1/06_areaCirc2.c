// Calculation of area using const
#include <stdio.h>
#include <math.h>

int main()
{
	float radius, area;
	printf("Enter radius : ");
	scanf("%f", &radius);
	const float PI = 3.14; // constant value of PI is assigned and can't be further modified
	area = PI * pow(radius, 2);
	;
	printf("The area of circle is : %f", area);
	getch();
	return 0;
}
