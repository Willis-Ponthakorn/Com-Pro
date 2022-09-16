#include<stdio.h>
int main()
{
	int x;
	int temp;
	int i;
	printf(" *** Multiplication Table ***\n");
	printf("Enter a number (2-100) : ");
	scanf("%d",&x);
	if(x >= 2 && x <= 100)
	{
		for(i = 1; i <= 12 ; i++)
		{
			temp = x * i;
			if(i <= 9)
				printf("%4d x %d%3s %d\n",x,i,"=",temp);
			else
				printf("%4d x %d%2s %d\n",x,i,"=",temp);
		}
	}
	else
		printf(" - - -  Out of Range  - - -\n");
	return 0;
}
