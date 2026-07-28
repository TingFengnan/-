#include <stdio.h>
int main ()
{
	double tall=0;
	double heavy=0;
	double jieguo=0;
	printf("输入您的身高和体重（m和kg）");
	scanf("%lf %lf",&tall,&heavy);
	jieguo=heavy/tall/tall;
	printf("您的bmi是%f",jieguo);
	return 0;
}
