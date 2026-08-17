#include <stdio.h>
int main()
{
	//寻找n位中所有水仙花数，需要判断有几位，然后一个数一个数n次幂拆开再相加尝试过去。看最后是不是等于它本身。
	int shu,a=0,b=1,d,c=1;
	int mark1, mark2,mark3,mark4;
	int ji=1,sum=0,e,f;
	scanf("%d",&a);
	//while(shu>0){shu/=10;
//	a++ ;
	//}
//	printf("%d",a);
	
		for(mark1=1;mark1<a;mark1++){
		b=b*10;
	}
	//printf("%d",b);
	 for(mark2=0;mark2<a;mark2++){
	 	c*=10;
	 }
	  c=c-1;
	 // printf("%d",c);
	 
	 for(d=b;d<=c;d++){sum=0;
	 e=d;
	 	for(mark3=0;mark3<a;mark3++){
	 		f=e%10;
	 		e=e/10;
	 		ji=1;
			for(mark4=0;mark4<a;mark4++){
			 ji*=f;}
	 		sum+=ji;
	 		
		 }
		 if(sum==d){printf("%d ",d);
		 }
	 }
	 return 0;
 } 
