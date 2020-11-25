#include<stdio.h>
void main(){
int x;
printf("\n\n	你想查询的名次:");
scanf("%d",&x);
	if(x==1)
	{printf("\n	北京大学\n\n");}
	else if(x==2)
	{printf("\n	清华大学\n\n");}
	else if(x==3)
	{printf("\n	复旦大学\n\n");}
	else if(x==4)
	{printf("\n	浙江大学\n\n");}
	else if(x==5)
	{printf("\n	中国人民大学\n\n");}
	else if(x==6)
	{printf("\n	上海交通大学\n\n");}
	else if(x==7)
	{printf("\n	南京大学\n\n");}
	else if(x==8)
	{printf("\n	武汉大学\n\n");}
	else if(x==9)
	{printf("\n	中山大学\n\n");}
	else if(x==10)
	{printf("\n	中国科学院大学\n\n");}
	else if(x>10)
	{printf("\n	铁子你的排名太靠后了，输入1-10试试吧\n");}
	else
	{printf("\n	铁子你见过第零号排名和负数的排名吗，反正我是没见过，所以别闹了铁子\n");}
return 0;
}
