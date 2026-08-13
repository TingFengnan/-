#include <stdio.h>
int main ()
{
	int a=0;
	int n=1;

	do
	{
	
	printf("关于学校，您有什么想说的吗？\n");
	printf("请输入您心怡的选项\n");
	printf(" 1留下 2 逃跑");
	scanf("%d",&a);
	switch (a)
	{
	case 1:
	printf("我很高兴你这样想\n");
	n=0;
	return 0;
	break;
	case 2:
	printf("不，你没有逃跑的权利。\n");
	a++;
	n++;
	break;}
    }while(n<3) ;



if(n=3){
while(1)
{printf("你是逃不掉的！！！");
}
}
	return 0;
	
}
