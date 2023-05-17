#include <stdio.h>
#include <stdlib.h>
 int main()
 {
 	int a,b=1,c;
 	printf("请输入一个数：");
	scanf("%d",&a);
	c=a;
	while (a>=1)
	{
		b*=a;
		a-=1;
	} 
 	printf("%d!=%d",c,b);
 	system("pause");
	return 0; 
 }
