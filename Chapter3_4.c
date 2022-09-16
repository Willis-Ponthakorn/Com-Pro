#include<stdio.h>
int main()
{
	int x = 0;
	printf(" *** Find total angles of n geometry ***\n");
	printf("Enter a number of sides : ");
	scanf("%d",&x);
	x -= 2;
	x *= 180;
	printf("\nSummation of inner angles : %d\n",x);
	return 0;
}
