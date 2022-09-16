#include<stdio.h>
int main()
{
	int x = 0;
	printf(" *** ODD/EVEN verification ***\n");
	printf("Enter an integer : ");
	scanf("%d",&x);
	if(x % 2 == 0)
		printf("%d is an EVEN number.\n",x);
	else
		printf("%d is an ODD number.\n",x);
	return 0;
}
