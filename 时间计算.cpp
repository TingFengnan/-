#include <stdio.h>
int main()
{
	int time1;
	int time2;
	int time3;
	int time4; 
	int timez;
	int times; 
	int w;
	int h;
	double s;
	printf("请分别之前输入小时和分钟数");
	scanf("%d %d",&time1,&time2);
	timez=time1*60+time2;
	printf("请分别输入目前的小时和分钟数");
	scanf("%d %d",&time3,&time4) ;
	times=time3*60+time4;
	w=times-timez;
	h=w/60;
	s=w%60;
	printf("结果是%d %f",h,s);
	return 0;

}
