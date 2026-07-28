#include <stdio.h>
int main()
{
	int a=0;
	printf("请选择你喜欢的数字 1 2 3 4 ");
	scanf ("%d",&a) ;
	switch (a){
		case 1:printf("111");
		break;
		case 2:printf("222");
		break;
		case 3:printf ("333");
		case 4:printf("累了不想打字");
	 
	}
	return 0;
}
