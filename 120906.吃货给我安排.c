#include<stdio.h>
#include<string.h>
int main(){
	char a[]="春节";
	char b[]="端午节";
	char c[]="中秋节";
	char d[]="元宵节";
	char e[]="给我安排饺子";
	char f[]="给我安排粽子";
	char g[]="给我安排月饼";
	char h[]="给我安排元宵";
	char i[100];
		printf("吃货小程序\n");
			scanf("%s",&i);
		if(strcmp(a,i)==0)
			{printf("%s\n",e);}
		else if(strcmp(b,i)==0)
			{printf("%s\n",f);}
		else if(strcmp(c,i)==0)
			{printf("%s\n",g);}
		else
			{printf("%s\n",h);}
return 0;
}
