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
		for(j = x - 1 ; j >= 0 ; j--)
		{
			temp = j + 'z' - i - x + 1;
			printf("%c",temp);
		}
		printf("\n");
	}
}
