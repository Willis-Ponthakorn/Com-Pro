#include<stdio.h>
int main()
{
	double x = 0;
	double y = 0;
	double z = 0;
	printf(" *** Check for right triangle (3 floats with maximum of 4 places decimal digits) ***\n");
	printf("Enter 3 sides of triangle : ");
	scanf("%lf %lf %lf",&x,&y,&z);
	float temp = x * 10;
	int a = temp * 1000;
	temp = y * 10;
	int b = temp * 1000;
	temp = z * 10;
	int c = temp * 1000;
	//printf("%d %d %d\n",a,b,c);
	if(a >= b && a >= c && a >= 0 && b >= 0 && c >= 0)
	{
		if((a * a) == (b * b) + (c * c) && a + b + c != 0)
			printf("%.4lf, %.4lf and %.4lf are sides of RIGHT triangle.\n",x,y,z);
		else if(a + b > c && a + c > b && b + c > a  && a + b + c != 0)
			printf("%.4lf, %.4lf and %.4lf are NOT sides of RIGHT triangle, just a TRIANGLE.\n",x,y,z);
		else
			printf("%.4lf, %.4lf and %.4lf are NOT sides of triangle.\n",x,y,z);
	}
	else if(b >= a && b >= c && a >= 0 && b >= 0 && c >= 0)
	{
		if((b * b) == (a * a) + (c * c) && a + b + c != 0)
			printf("%.4lf, %.4lf and %.4lf are sides of RIGHT triangle.\n",x,y,z);
		else if(a + b > c && a + c > b && b + c > a && a + b + c != 0)
			printf("%.4lf, %.4lf and %.4lf are NOT sides of RIGHT triangle, just a TRIANGLE.\n",x,y,z);
		else
			printf("%.4lf, %.4lf and %.4lf are NOT sides of triangle.\n",x,y,z);
	}
	else if(c >= a && c >= b && a >= 0 && b >= 0 && c >= 0)
	{
		if((c * c) == (a * a) + (b * b) && a + b + c != 0)
			printf("%.4lf, %.4lf and %.4lf are sides of RIGHT triangle.\n",x,y,z);
		else if(a + b > c && a + c > b && b + c > a && a + b + c != 0)
			printf("%.4lf, %.4lf and %.4lf are NOT sides of RIGHT triangle, just a TRIANGLE.\n",x,y,z);
		else
			printf("%.4lf, %.4lf and %.4lf are NOT sides of triangle.\n",x,y,z);
	}
}
