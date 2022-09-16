#include<stdio.h>
int main()
{
	int x,i;
	int temp = 0;
	printf(" *** Perfect Number Verification ***\n");
	printf("Enter a counting number : ");
	scanf("%d",&x);
	if(x < 1)
		printf("Only positive number : DO YOU UNDERSTAND !!!\n");
	else
	{
		for(i = 1; i < x;i++)
		{
			if(x%i == 0)
			{
				temp +=i;
			}
		}
		if(temp == x)
		{
			printf("%d is a PERFECT NUMBER.\n",x);
		}
		else
		{
			printf("%d is NOT a perfect number.\n",x);
		}
	}
}
