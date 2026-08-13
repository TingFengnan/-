#include <stdio.h>
int main(){
	//正整数逆向输入
	//扫描，循环，先取余再取整，直到变成0
	int a;
	scanf("%d",&a); 
	int b;
	int c;
	for(b=1;a>0;b++)
	{c=a%10;
	a=a/10;
	printf("%d",c);
	}
	return 0;
	} 
