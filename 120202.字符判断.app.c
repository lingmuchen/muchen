#include<stdio.h>
int main(){
	char m;	
	printf("	欢迎字符判断语句程序\n");
	printf("请输入字符\n");
	printf("	");
	scanf("%c",&m);
	switch(m){
	  case'w':printf("	你在点击“上”键\n");break;
	  case'a':printf("	你在点击“左”键\n");break;
	  case'd':printf("	你在点击“右”键\n");break;
	  case's':printf("	你在点击“下”键\n");break;
	  default:printf("输入有误，请输入a w s d四个字符其中之一");
	}
	return 0;
}
