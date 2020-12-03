#include<stdio.h>
#include<windows.h>
int main(){
int l,c;
int ling[20][10]={
	{1,3,5,7,9},
	{0,2,4,6,8}
	};
for(l=0;l<20;l=l++){
	for(c=0;c<10;c=c++){
		ling[l][c]=999;
		printf("%d ",ling[l][c]);
		}
	printf("\n");
	}
printf("\n");
	Sleep(5000);
for(l=0;l<20;l=l++){
	for(c=0;c<10;c=c++){
		ling[l][c]=0;
		printf("%d ",ling[l][c]);
	}
	printf("\n");
}
return 0;
}
