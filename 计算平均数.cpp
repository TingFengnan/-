#include <stdio.h>
int main()
{
	double a;
	scanf("%lf",&a);
	int b;
	b=0;
	double c;
	double d;
	while (b<a){scanf("%lf",&c);
	b++;
	d+=c;
	printf("%f",d);
	}

	d=d/a;
	printf("%.2f",d);
	return 0;
 } 
