#include <stdio.h>
int main()
{
	int a;
	int b=0;
	printf("请输入你想判断位数的数字");
	scanf("%d",&a);
	do{b++;
	a=a/10;
	} 
	while(a>0);
	printf("您要判断的数字位数是%d",b);
	return 0;
}
