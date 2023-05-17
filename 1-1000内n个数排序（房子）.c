#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10001],i,b,h;
	system("color f6");
	printf("1-1000���������\n������Ҫ�������������������enter��ִ����һ����");
	scanf("%d",&h) ;
	printf("������Ҫ�������������enter��ִ����һ����\n");
	for(i=0;i<=1000;i++)
		a[i]=0;
	for (i=1;i<=h;i++)
	{
		printf("a[%d]=",i); 
		scanf("%d",&b);
		a[b]++;
	}
	for(i=0;i<=1000;i++)
		{
			for(h=1;h<=a[i];h++)
				printf("%d ",i);
		} 
} 

