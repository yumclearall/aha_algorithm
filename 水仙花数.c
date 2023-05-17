#include<stdio.h>
#include<stdlib.h> 
int main()
{
	printf("所有的三位水仙花数\n");
	int a=100,b,c,d;
	while (a<1000)
	{
	b=a/100;c=a/10%10;d=a%10;

	if (b*b*b+c*c*c+d*d*d==a ) 
		printf("%d ",a);
	a=a+1;
	}
	system("pause");
	return 0; 
}
