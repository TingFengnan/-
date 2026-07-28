#include <stdio.h>
int main ()
{
	int a=0;
	int b=0;
	//初始化
	printf("请输入您购买的物品的金额");
	scanf("%d",&a); 
	printf("请输入您购买的预算");
	scanf("%d",&b);
	if(b>a){printf("%d",b-a);
	} 
	else{printf("没钱还想买东西，做你的春秋大梦！"); 
	}
	return 0;
}
