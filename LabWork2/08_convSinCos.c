#include <stdio.h>
#include <math.h>
#define PI 3.14

int main()
{
	printf("Sin(0) =%0.4lf Sin(45)=%0.4lf Sin(90)%0.4lf\n", sin(0), sin(0.785375), sin(1.57075));
	printf("Cos(0)=%0.4lf Cos(45)=%0.4lf Cos(90)=%0.4lf\n", cos(0), cos(0.785375), cos(1.57075));
	return 0;
}
