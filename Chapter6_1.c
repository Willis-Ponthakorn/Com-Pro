#include<stdio.h>
int main()
{
	int x,i,j;
	printf(" *** Show isosceles triangle ***\n");
	printf("Enter a counting number : ");
	scanf("%d",&x);
	if(x < 3)
		printf(" --- Incorrect number. ---\n");
	else
	{
		printf("Output :\n");
		for(i = 1 ; i <= x ; i++)
		{
			for(j = x ; j > i ; j--)
			{
				printf(" ");
			}
			for(j = ((2*i)-1) ; j >= 1 ; j--)
			{
				printf("*");
			}
			printf("\n");
		}
	}
}
