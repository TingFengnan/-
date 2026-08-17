//先练习一下函数，再把初级数组练习一下
#include <stdio.h>
int max(int a,int b)
{
	if(a>b){return a;
	}
	else{return b;
	}
}

int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	printf("%d",max(x,y));
	return 0;
}
