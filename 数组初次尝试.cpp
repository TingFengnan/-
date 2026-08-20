#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(0));
	int a= rand()%5;
	int guiji[10];
	int b=0; 
	printf("可以试着猜一下这个随机数哦，你只有10次猜测的机会。我会记录你猜的每一个数，然后输出你的猜测轨迹");
	do{
	
		scanf("%d",&guiji[b]);
		
		if(guiji[b]>a){
			printf("猜大了\n");
		}
		if(guiji[b]<a){
			printf("猜小了\n");
		}
		if(guiji[b]==a){
			printf("猜对了\n");
			printf("你第%d次猜对了%d这个数字哦\n",b+1,a);
			int mark;
				int i;
			i=0;
			for(mark=0;mark<b;mark++){
			
				i++;
				printf("你第%d猜了%d哦\n",i,guiji[mark]);
			} 
			
			return 0;
		
		}
		if(b==9){
			printf("你的机会已经用完了哦！\n");
			printf("%d才是正确的数字哦\n",a);
			int mark;
				int i;
			i=0;
			for(mark=0;mark<10;mark++){
			
				i++;
				printf("你第%d猜了%d哦\n",i,guiji[mark]);
			} 
			
			return 0;
		}
			b++;
	} 
	while(1);
	return 0;
}
