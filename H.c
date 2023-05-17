#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
	system("color f6");
	printf("H的速度（1最快）：");
	int a=100,b,c,d=20;
	scanf("%d",&c);
	
	{
		while(a>=0)
			{
		b=1;
		system("cls");
		while (b<=a)
		{
			printf(" ");
			b+=1;
		}
		a-=1;
		printf("H\n");
		
		Sleep(c);
		}
	
	}
	system("pause");
	return 0;
} 
