#include <stdio.h>
int isprime(int a,int count,int number[]);
int main()
{
	int b;
	printf("哇咔咔，用户你好呀，你可以选定一个范围，我，一个非常聪明的人所写的程序，会把这个范围内所有的素数变成合集输出给你看~\n");
	printf("好的，快快输入吧！");
	scanf("%d",&b);
	int number[b]={2};
	int i,mark=1;
	for(i=2;i<=b;i++){
		if(isprime(i,mark,number)){//这个调用函数的变量不齐，记得改一下！ 
			number[mark]=i;
			mark++;
		}
	}
	int c;
	for(c=0;c<mark;c++)
	{printf("%d\n",number[c]);
	}
	
	
}
int isprime(int a,int count,int number[])
{
	int k;
	for(k=0;k<count;k++){
		if(a%number[k]==0){
			return 0;
		}
	}
	return 1;
}
