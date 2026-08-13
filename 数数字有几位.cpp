#include <stdio.h>
int main()
{
	printf("请输入数字，我会帮助你判断数字有几位哦");
	int a=0;
	scanf("%d",&a) ;
	int n=0;
	n++;
	a=a/10;
	while(a>0){n++; 
	printf("现在在计算哦");
	a=a/10;
	}
	printf("您输入的数字是%d位数",n);
	return 0;
}

