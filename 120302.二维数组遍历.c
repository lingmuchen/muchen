#include<stdio.h>
int main(){
int l,c;
int ling[2][5]={
	{1,3,5,7,9},
	{0,2,4,6,8}
	};
for(l=0;l<2;l=l++){
	for(c=0;c<5;c=c++){
		printf("%d ",ling[l][c]);
		}
	{printf("\n");}
	}
return 0;
}
