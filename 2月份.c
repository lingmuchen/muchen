#include<stdio.h>
int main(){
	int m,l;
	int luo[]={31,28,31,30,31,30,31,31,30,31,30,31};
	for(m=0;m<=11;m++)
	printf("%d ",luo[m]);
		printf("\n月份");
		scanf("%d",&l);
		l=l-1;
		printf("一共%d天\n",luo[l]);
	return 0;
}
