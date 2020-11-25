#include<stdio.h>
int main()
{
	while(1)
	{
	int m,l;
	l=8;
	printf("	猜数字游戏\n\n");
	printf("	请在1—100之间输入一个整数m=");
	scanf("%d",&m);
	if(m==l)
	{printf("\n	恭喜你猜对了!\n\n");}
	else if(m<l&&m>=1)
	{printf("	你猜得太小了哟\n\n");}
	else if(m>l&&m<=100)
	{printf("	你猜的太大啦\n\n");}
	else
	{printf("	你有够离谱的\n\n");}
	}
	return 0;
	
}
