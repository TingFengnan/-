#include <stdio.h>
int main()
{
	//要把所有1角2角5角组成n元的可能都输出
	//用for循环，限定范围 
	//先定义变量
	int a,b,c;
	int n;
	int exit=1;
	printf("请输入您想要凑的钱--");
	scanf("%d",&n); 
	for(a=0;a<=n*10;a++){
		for(b=0;b<=n*5;b++){
			for(c=0;c<=n*2;c++){
				if(a*1+b*2+c*5==n*10){
				
				printf("%d个壹角%d个贰角%d个伍角能组成%d元\n",a,b,c,n);
				exit=0;
				
			}
			
			}if(exit==0); 
		}if(exit==0); 
	}
	 return 0;
}
