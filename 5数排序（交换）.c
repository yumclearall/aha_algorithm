#include<stdio.h>
#include<stdlib.h>
int main()
{
	system("color f5");
	printf("请输入5个数，按“enter”执行下一步：\n");
	int a[6],b,h,t;
	for(b=1;b<=5;b++)
	{	/*printf("a[%d]=",b) ;
		scanf("%d",&a[b);*/
		printf("a[%d]=",b) ;
		scanf("%d",&h);
		a[b]=h;
	}
	for(b=1;b<=4;b++)
	{
		for(h=b+1;h<=5;h++)
		{
			if(a[h]>a[b])
				{
				t=a[b];a[b]=a[h];a[h]=t;
				}
		}
	}
	for(b=1;b<=5;b++) 
		printf("%d ",a[b]);
		
	
	printf("\n");
	system("pause");
	return 0;
}
