#include <stdio.h>
int main ()
{
	//目标，让一个五位数被拆开再输出 
	int x;
	int a;
	int b=10000; 
	scanf ("%d",&x);
	do{
		a=x/b;
		x%=b;
		b=b/10;
		printf("%d ",a);
		
	}while(b>0);
	return 0;
}
