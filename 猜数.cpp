#include <stdio.h>
int main()
{
	printf("我们来玩猜数游戏吧！\n 你随便输入一个数，我会告数你这个大了还是小了哦");
	int a=0;
	const int b=100;
	do{scanf("%d",&a);
	if(a>b){printf("大了哦！");}
	if(a==b){printf("对的，猜对了！");}
	if(a<b){printf("小了哦");} 
		
	}while(a!=b);
	return 0;
}
