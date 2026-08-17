#include <stdio.h>
int main()
{
	//输入一个数，然后包括它自己的连续递增四位数字，组成没有相同数字的三位数
	int a;
	scanf("%d",&a);
	int b,c,d;
	int e=0;
	for(d=a;d<a+4;d++){
		for(b=a;b<a+4;b++){
			for(c=a;c<a+4;c++){
				if(a!=b&&a!=c&&b!=c){
					printf("%d%d%d",a,b,c);
					e++;
					if(e==6){printf("\n");
					e=0;}
					else{printf(" ");
					}
				}
			}
		}
	} 
	return 0;
 } 
