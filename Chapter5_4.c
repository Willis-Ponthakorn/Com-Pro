#include<stdio.h>
int main()
{
	int i,j;
	int temp;
	int x;
	printf("Enter a number : ");
	scanf("%d",&x);
	
	for(i = 0 ; i < x ; i++)
	{
		for(j = 0 ; j < x ; j++)
		{
			temp = j + 'a' + i;
			printf("%c",temp);
		}
		printf("\n");
	}
}
