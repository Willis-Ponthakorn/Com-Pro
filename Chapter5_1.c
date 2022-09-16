#include<stdio.h>
int main()
{
	int x = 0;
	int temp = 1;
	int i,j;
	int num[100];
	int n = 0;
	printf(" *** Find Factorial ***\n");
	printf("Enter a number less than 100 : ");
	scanf("%d",&x);
	printf("Factorial of %d = ",x);
	for(i = x ; i > 0 ; --i)
	{
		printf("%d ",i);
		if(i > 1)
		{
			printf("x ");
		}
		temp *= i;
	}
	printf("= ");
	while(temp%1000 > 0)
	{
		num[n] = temp % 1000;
		temp /= 1000;
		n++;
	}
	n--;
	for(j = n ; j >= 0 ; j--)
	{
		if(num[j] >= 100 || j == n)
			printf("%d",num[j]);
		else if(num[j] >= 10 && num[j] < 100)
			printf("0%d",num[j]);
		else if(num[j] < 10)
			printf("00%d",num[j]);
		if(j > 0)
			printf(",");
	}
	return 0;
}
