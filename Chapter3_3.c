#include<stdio.h>
int main()
{
	printf(" *** Convert Celcius to Fahrenheit ***\n");
	printf("Enter temperature in degree celcius : ");
	double x = 0;
	scanf("%lf",&x);
	double y = 32 + (9 * x / 5);
	printf("%.2lf degrees equals %.2lf degree Fahrenheit.",x,y);
	return 0;
}
