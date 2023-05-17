#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10001],i,b,h;
	system("color f6");
	printf("1-1000以内数排序\n请输入要排序的数的数量，按“enter”执行下一步：");
	scanf("%d",&h) ;
	printf("请输入要排序的数，按“enter”执行下一步：\n");
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
	printf("\n");
	system("pause");
	return 0;
} 

