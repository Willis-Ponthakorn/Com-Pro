#include<stdio.h>
int main()
{
	unsigned long x = 0;
	printf(" *** Display integer in different styles ***\n");
	printf("Enter an integer : ");
	scanf("%ld",&x);
	printf("Your number : %ld\n",x);
	printf("variable size = %d bytes\n",sizeof(x));
	int a = x % 1000;
	printf("last 3 digits : %3d\n",a);
	x /= 1000;
	int b = x % 1000;
	printf("next 3 digits : %3d\n",b);
	x /= 1000;
	int c = x % 1000;
	printf("next 3 digits : %3d\n",c);
	x /= 1000;
	int d = x % 1000;
	printf("next 3 digits : %3d\n",d);
	printf("comma format  : %d,%d,%d,%d",d,c,b,a);
	
	return 0;
}
