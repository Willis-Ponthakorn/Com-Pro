#include<stdio.h>
int main()
{
	int x = 0;
	printf(" *** switch control structure ***\n");
	printf("Enter a number : ");
	scanf("%d",&x);
	switch(x % 3)
	{
		case 0 :
			printf("Hello, world!\n");
			break;
		case 1 :
			printf("Hello, what a wonderful world!\n");
			break;
		case 2 :
			printf("Hello, it is a beautiful day.\n");
			break;
	}
}
