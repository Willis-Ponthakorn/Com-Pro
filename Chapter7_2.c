#include<stdio.h>
int sqrt(int x)
{
	int i;
	for(i = 1 ; i <= x; i++)
	{
		if(i*i == x)
		{
			return i;
		}
	}
	return 0;
}
void quadratic_solver(int x, int y, int z)
{
	int ans1 = (-y + sqrt((y*y) - (4*x*z))) / (2*x);
	int ans2 = (-y - sqrt((y*y) - (4*x*z))) / (2*x);
	if(ans1==ans2)
		printf("x = %d",ans1);
	else
	{
		printf("x1 = %d\n",ans2);
		printf("x2 = %d",ans1);	
	}	
}

int main() {
	int a,b,c;
	float ans1, ans2;
	printf(" *** Quadratic Solver ***\n");
	printf(" *   ax^2 + bx + c = 0  *\n");
	printf(" ************************\n\n");
	printf("Enter a b c : ");
	scanf("%d %d %d", &a, &b, &c);
	if (a==0) {
		printf("a cannot be zero ! ! !\n");
		return 0;
	}
	quadratic_solver(a,b,c);
	return 0;
}

