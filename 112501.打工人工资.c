#include<stdio.h>
void main(){
int x;
printf("		输入月工资");
scanf("%d",&x);
	if(x>0,x<=100)
		{printf("		贫困打工人\n");}
	else if(x>=101,x<=1000)
		{printf("		一般打工人\n");}
	else if(x>=1001,x<=20000)
		{printf("		土豪打工人\n");}
	else
		{printf("		输入有误，请重新输入\n");}
}
