#include<stdio.h>
int main(){
	int x,y;
	printf("\n     输入一个数值\n     x=");
	scanf("%d",&x);
	if(x<1){
		printf("     y=%d\n",x);}
	else if(x>=1,x<10){
		printf("     y=%d\n",2*x-1);}
	else{
		printf("     y=%d\n",3*x-11);}
	return 0;}
