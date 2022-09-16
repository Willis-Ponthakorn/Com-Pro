#include<stdio.h>
int main()
{
	int num[10],i,j,minIndex,ans[10],temp;
	printf(" *** Ascending sort ***\n");
	printf("Enter 10 whole numbers : ");
	for(i = 0 ; i < 10;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i = 0 ; i < 9 ; i++)
	{
		minIndex = i;
		for(j = i+1 ; j < 10;j++)
		{
			if(num[minIndex] > num[j])
				minIndex = j;
		}
		temp = num[minIndex];
		num[minIndex] = num[i];
		num[i] = temp;
	}
	printf("Output : ");
	for(i = 0 ; i < 10;i++)
	{
		printf("%d ",num[i]);
	}
}
