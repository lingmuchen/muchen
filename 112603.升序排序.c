#include<stdio.h>
int main(viod){
	int m,l,c;
	int z;
	scanf("%d%d%d",&m,&l,&c);
	if(m>l)
	{z=m,m=l,l=z;}
	if(m>c)
	{z=m,m=c,c=z;}
	if(l>c)
	{z=l,l=c,c=z;}
	printf("%d\n%d\n%d\n",m,l,c);
return 0;
}
