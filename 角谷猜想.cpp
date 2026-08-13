#include <stdio.h>
int main()
{
	long long a=0; 
	long long b=0;
	scanf("%lld",&a);
	while(a!=1){
		if(a%2==0){	b=a/2;
		printf("%lld/2=%lld\n",a,b);
		a=b;
		}
		else
		{b=a*3+1;
		printf("%lld*3+1=%lld\n",a,b);
		
		a=b;
		}
	}
	printf("End");
	return 0;
}
