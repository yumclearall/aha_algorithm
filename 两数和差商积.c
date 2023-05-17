# include<stdio.h>
#include<stdlib.h>
int main()
{
	printf("两个的数和差商积 按“enter”执行下一步");
	int a,b,c,d,e,f,h;
	printf("\na=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	if (b>a)
	{
		h=a;a=b;b=h;
	}
	c=a+b;d=a-b;e=a*b;f=a/b;
	printf("%d+%d=%d \n",a,b,c);
	printf("%d-%d=%d\n",a,b,d);
	printf("%d*%d=%d\n",a,b,e);
	printf("%d/%d=%d",a,b,f);
	system("pause");
	return 0;
}
