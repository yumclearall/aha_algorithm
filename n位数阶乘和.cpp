#include <stdio.h>
int main()
{
	int i,x=0,a,n,b;
	printf("请输入一个数："); 
	scanf("%d",&b);
	for(n=1;n<=b;n++)
		{
		a=1;
		for(i=1;i<=n;i++) a*=i;
		x+=a;
		}
	printf("%d",x);
	
}
