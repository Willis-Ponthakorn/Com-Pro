#include<stdio.h>
int main()
{
	char c[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	int x,i,j=0,k,l=0,temp;
	printf(" *** Show triangle with ASCII ***\n");
	printf("Enter a whole number : ");
	scanf("%d",&x);
	if(x < 3 || x > 25)
	{
		printf("%d is out of range !!!",x);
	}
	else
	{
		for(i = x ; i > 0 ; i--)
		{
			if(i == x)
			{
				while(j < i)
				{
					temp = j%16;
					printf("%c",c[temp]);
					j++;
				}
			}
			else
			{
				for(k = 1 ; k <= i ; k++)
				{
					if(k == 1 || k == i)
					{
						temp = j%16;
						printf("%c",c[temp]);
					}
					else
						printf(" ");
						
					j++;
				}
			}
			printf("\n");
		}
	}
}
