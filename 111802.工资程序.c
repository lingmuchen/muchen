#include<stdio.h>
int main(){
	int m;
	scanf("%d",&m);
	if(m<0){
		printf("花呗没还，无法使用\n");
	}
	else if(m>=0&&m<=500){
		printf("赤贫\n");
	}
	else if(m>=501&&m<=1500){
		printf("贫困\n");
	}
	else if(m>=1501&&m<=3000){
		printf("普通打工人\n");
	}
	else if(m>=3001&&m<=5000){
		printf("普通清洁工\n");
	}
	else if(m>=5001&&m<=12000){
		printf("水电工工资\n");
	}
	else if(m>=12001&&m<=50000){
		printf("脑袋大脖子粗不是老板就是伙夫\n");
	}
	else {
		printf("程序员\n");}

}
