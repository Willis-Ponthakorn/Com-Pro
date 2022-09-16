#include<stdio.h>
int main()
{
	int x,i,n = 0;
	int temp = 0;
	printf(" *** divisible number ***\n");
	printf("Enter a positive number : ");
	scanf("%d",&x);
	if(x < 1)
	{
		printf("%d is OUT of range !!!\n",x);
	}
	else
	{
		printf("Output ==>");
		for(i = 1 ; i <= x ; i++)
		{
			if(x%i == 0)
			{
				printf(" %d",i);
				n++;
			}
		}
		printf("\nTotal ==> %d\n",n);
	}
	return 0;
}
