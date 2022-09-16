#include<stdio.h>
int main()
{
	int x,i,temp,ans,sum = 0;
	printf("Enter a number (100-995) : ");
	scanf("%d",&x);
	if(x < 100 || x > 995)
	{
		printf("Out of range : %d\n",x);
	}
	else
	{
		for(i = 0 ; i < 5 ; i ++)
		{
			temp = ((x+i)%10)*100 + (((x+i)/10)%10)*10 + (x+i)/100;
			ans = (x+i) - temp;
			if(ans < 0)
				ans *= -1;
			printf("|%4d - %-3d%2c = %3d\n",(x+i),temp,'|',ans);
			sum += ans;
		}
		printf("summation : %d",sum);
	}
}
