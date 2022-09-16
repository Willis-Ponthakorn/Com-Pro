#include<stdio.h>
#include<ctype.h>
int main()
{
	int i;
	char str[100];
	printf("Enter a string : ");
	scanf("%[^\n]s",&str);
	for(i = 0 ; i<=100;i++)
	{
		str[i] = toupper(str[i]);
	}
	printf("Capital : %s\n",str);
	for(i = 0 ; i<=100;i++)
	{
		str[i] = tolower(str[i]);
	}
	printf("Small : %s",str);
}
