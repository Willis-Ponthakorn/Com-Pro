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
	printf("Small : %s\n",str);
	for(i = 0 ; i<=100;i++)
	{
		if(i == 0)
			str[i] = toupper(str[i]);
		if(str[i] == ' ')
			str[i+1] = toupper(str[i+1]);
	}
	printf("Title : %s",str);
}
