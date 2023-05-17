#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	printf("分钟计时器\n请输入一个数，按“enter”执行：");
	int a,b=0;
	scanf("%d",&a);
	printf("倒计时%d分钟",a);
	Sleep(1000);
	system("cls"); 
	while (a>=0)
	{
		system("color 04");
		if (b/10==0)
		printf("%d:0%d",a,b);
		else
		printf("%d:%d",a,b); 
		Sleep(1000); 
		system("cls");
		b-=1;
		if (b<0)
		{
			a-=1;b=59;
			
		}
	}
	return 0;
	
}
