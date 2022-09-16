#include<stdio.h>
int main()
{
	int x,y,z;
	printf(" *** Check for right triangle ***\n");
	printf("Enter 3 sides of triangle : ");
	scanf("%d %d %d",&x,&y,&z);
	if(x >= y && x >= z && x >= 0 && y >= 0 && z >= 0)
	{
		if((x * x) == (y * y) + (z * z) && x + y + z != 0)
			printf("%d, %d and %d are sides of RIGHT triangle.\n",x,y,z);
		else if(x <= y + z  && x + y + z != 0)
			printf("%d, %d and %d are NOT sides of RIGHT triangle, just a TRIANGLE.\n",x,y,z);
		else
			printf("%d, %d and %d are NOT sides of triangle.\n",x,y,z);
	}
	else if(y >= x && y >= z && x >= 0 && y >= 0 && z >= 0)
	{
		if((y * y) == (x * x) + (z * z) && x + y + z != 0)
			printf("%d, %d and %d are sides of RIGHT triangle.\n",x,y,z);
		else if(y <= x + z  && x + y + z != 0)
			printf("%d, %d and %d are NOT sides of RIGHT triangle, just a TRIANGLE.\n",x,y,z);
		else
			printf("%d, %d and %d are NOT sides of triangle.\n",x,y,z);
	}
	else if(z >= x && z >= y && x >= 0 && y >= 0 && z >= 0)
	{
		if((z * z) == (x * x) + (y * y) && x + y + z != 0)
			printf("%d, %d and %d are sides of RIGHT triangle.\n",x,y,z);
		else if(z <= x + y  && x + y + z != 0)
			printf("%d, %d and %d are NOT sides of RIGHT triangle, just a TRIANGLE.\n",x,y,z);
		else
			printf("%d, %d and %d are NOT sides of triangle.\n",x,y,z);
	}
}
