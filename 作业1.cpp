#include <stdio.h>
int main ()
{
	int price=0;
	int pric=0;
	printf("请输入您购买的两个商品分别耗费的金额");
	scanf ("%d %d",&price,&pric);
	int amount=0;
	printf("请输入您的预算");
	scanf("%d",&amount) ;
	int charge=amount-price-pric;
	printf("需要找您=%d\n",charge);
	return 0;
}

