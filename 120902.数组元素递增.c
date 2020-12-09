#include<stdio.h>
int main(){
int l,c;
int m=1;
int ling[19][20]={
	{0},
	{0}
	};
for(l=0;l<19;l=l++){
	for(c=0;c<20;c=c++){
		ling[l][c]=0;
		printf("%d ",ling[l][c]);
		}
	{printf("\n");}
	}
printf("\n");
	for(l=0;l<19;l=l++){
	for(c=0;c<20;c=c++){
	ling[l][c]=m++;
		printf("%d ",ling[l][c]);
	}
	printf("\n");
}
return 0;
}
