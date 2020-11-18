#include<stdio.h>
int main(){
	int a,b,c,x,y;
	a=3,b=4,c=5;
	printf("  %d  ",a+b>c&&b==c);
	if(a+b>c&&b==c)
		printf("真\n");
	else
		printf("假\n");
	printf("  %d  ",a||b+c&&b-c);
	if(a||b+c&&b-c)
		printf("真\n");
	else
		printf("假\n");
	printf("  %d  ",!(a>b)&&!c||1);
	if(!(a>b)&&!c||1)
		printf("真\n");
	else
		printf("假\n");
	printf("  %d  ",!(x=a)&&(y=b)&&0);
	if(!(x=a)&&(y=b)&&0)
		printf("真\n");
	else
		printf("假\n");
	printf("  %d  ",(a+b)+c-1&&b+c/2);
	if((a+b)+c-1&&b+c/2)
		printf("真\n");
	else
		printf("假\n");
	return 0;
}
