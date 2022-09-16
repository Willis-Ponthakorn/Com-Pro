#include<stdio.h>
int main()
{
	int x = 0;
	printf(" *** Show a number in variety formats. ***\n");
	printf("Enter a whole number : ");
	scanf("%d",&x);
	printf("You have input : %d\n",x);	
	printf("You have input : %.2f\n",x*1.0);
	printf("Square : %d\n", (x*x));
	float a = x / 79.000000000;
	double b = x / 29.000000000;
	double c = x / 37.000000000;
	printf("%6d / 79 = %.4f\n",x,a);
	printf("%6d / 29 = %.6f\n",x,b);
	printf("%6d / 37 = %.9lf\n",x,c);
	
	
	return 0;
}
