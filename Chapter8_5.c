#include<stdio.h>
#define SIZE 10
int main() {
    struct student {
        char id[9];
        char name[40];
        int marking;
    } st[SIZE];
    int i,i_max=0,max[SIZE],j=0;
    printf(" *** Structure Array 2 ***\n");
    printf("Enter data : ");
    for(i=0;i<SIZE;i++) {
        scanf("%s %s %d",st[i].id,st[i].name,&st[i].marking);
    }
	for(i = 0 ; i < SIZE ; i++)
	{
		if(st[i].marking > st[i_max].marking)
		{
			i_max = i;
			j = 0;
		}
		if(st[i].marking == st[i_max].marking)
			{
				max[j] = i;
				j++;
			}	
	}
    printf("\n\n *** Analyzing Data ***\n");
	printf("Max marking   = %d points, %d students.\n",st[i_max].marking,j);
	for(i = 0 ; i < j; i++)
		printf("%d. %s %s %d\n",i+1,st[max[i]].id,st[max[i]].name,st[i_max].marking);
    return 0;
}
