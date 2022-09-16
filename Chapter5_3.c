#include <stdio.h>
int main() {
    char x;
    unsigned char y;
    int l=5,i=1,input;
    printf(" *** Display char and unsigned char ***\n");
    printf("Enter number and length : ");
    scanf("%d %d",&input,&l);
    i = 0;
    while(i < l)
	{
        x = (char) (input +i);
        y = (unsigned char) x;
        printf("char = %-5d\tunsigned char = %-5u\n",x,y);
        i++;
    }
    printf("\n");
    return 0;
}
