#include <stdio.h>
int main()
{
	const int PASS1=90;
	const int PASS2=60;
	int a=0;
	printf("请输入您试卷的满分");
	scanf("%d",&a); 
	printf("请输入您的成绩");
	int b=0;
	scanf("%d",&b);
	if(a==150){printf("哇，看来是主课呢！"); 
	if(b>90){printf("祝贺 苟延残喘及格了！") ;}
	else {printf("哦，就这点分！");}
	}
	
	else{
		printf("ok,原来是副科。");
		if(b>60){printf("OK啊，你小子也是及格了");}
		
		else {printf("哈哈哈，照这个样子下去可以煮鸡蛋啦！");
		}
	}
}
