#include<stdio.h>
int main(){
int l,c;
int m=91;
int ling[9][10]={
	{0},
	{0}
	};
for(l=0;l<9;l=l++){
	for(c=0;c<10;c=c++){
		ling[l][c]=0;
		printf("%d ",ling[l][c]);
		}
	{printf("\n");}
	}
printf("\n");
	for(l=0;l<9;l=l++){
	  for(c=0;c<10;c=c++){
	    ling[l][c]=m--;
		    printf("%d ",ling[l][c]);
	}
	printf("\n");
}
return 0;
}
