#include<stdio.h>
int main()
{
	int x,y,z;
	float a;
	printf(" *** Find Maximum / Mininum ***\n");
	printf("Enter 3 integers : ");
	scanf("%d %d %d",&x,&y,&z);
	if(x >= y && x >= z)
	{
		if(z >= y) // x max y min
		{
			a = (x * 1.000) / (y * 1.0000);
			printf("Max / Min = %d / %d = %.3f",x,y,a);
		}
		else // x max z min
		{
			a = (x * 1.000) / (z * 1.0000);
			printf("Max / Min = %d / %d = %.3f",x,z,a);
		}
		
	}
	else if(y >= x && y >= z)//y max
	{
		if(z >= x) //y max x min
		{
			a = (y * 1.0000) / (x * 1.0000);
			printf("Max / Min = %d / %d = %.3f",y,x,a);
		}
		else //y max z min
		{
			a = (y * 1.0000) / (z * 1.0000);
			printf("Max / Min = %d / %d = %.3f",y,z,a);
		}
	}
	else if(x >= y && x <= z) // z max y min
	{
		a = (z * 1.0000) / (y * 1.0000);
		printf("Max / Min = %d / %d = %.3f",z,y,a);
	}
	else if(y >= x && y <= z) // z max x min
	{
		a = (z * 1.0000) / (x * 1.0000);
		printf("Max / Min = %d / %d = %.3f",z,x,a);
	}
}
