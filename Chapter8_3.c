#include<stdio.h>
int main()
{
	int x,y,min,max,i,temp,num[10] = {0,0,0,0,0,0,0,0,0,0};
	printf(" *** Digit counting ***\n");
	printf("Enter two counting numbers : ");
	scanf("%d %d",&x,&y);
	if(x < 1 || y < 1)
	{
		printf("Invalid input !!!\n");
		return 0;
	}
	else
	{
		if(x>y)
		{
			min = y;
			max = x;
		}
		else
		{
			min = x;
			max = y;
		}
		for(i = min ; i <= max ; i++)
		{
			temp = i;
			while(temp>0)
			{
				num[temp%10]++;
				temp /= 10;
			}
		}
		for(i = 0 ; i < 10 ; i++)
		{
			printf("%d --> %d\n",i,num[i]);
		}
	}
}
