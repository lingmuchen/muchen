#include<stdio.h>
int main(){
	int m;	
	printf("	欢迎使用QS大学排名查询程序\n");
	printf("	请输入您想要查询的排名:\n");
	printf("	");
	scanf("%d",&m);
	switch(m){
		case 1:printf("	该名次的大学为北京大学\n");break;
		case 2:printf("	该名次的大学为清华大学\n");break;
		case 3:printf("	该名次的大学为复旦大学\n");break;
		case 4:printf("	该名次的大学为浙江大学\n");break;
		case 5:printf("	该名次的大学为南京大学\n");break;
		case 6:printf("	该名次的大学为上海交通大学\n");break;
		case 7:printf("	该名次的大学为华中科技大学\n");break;
		case 8:printf("	该名次的大学为中国科学技术大学\n");break;
		case 9:printf("	该名次的大学为中国人民大学\n");break;
		case 10:printf("	该名次的大学为天津大学\n");break;
		case 11:printf("	该名次的大学为武汉大学\n");break;
		case 12:printf("	该名次的大学为南开大学\n");break;
		case 13:printf("	该名次的大学为山东大学\n");break;
		case 14:printf("	该名次的大学为中山大学\n");break;
		case 15:printf("	该名次的大学为西安交通大学\n");break;
		case 16:printf("	该名次的大学为哈尔滨工业大学\n");break;
		case 17:printf("	该名次的大学为东南大学\n");break;
		case 18:printf("	该名次的大学为四川大学\n");break;
		case 19:printf("	该名次的大学为吉林大学\n");break;
		case 20:printf("	该名次的大学为同济大学\n");break;
	default:printf("	请输入一个1-20之间的数字\n");
	}
	return 0;
}
