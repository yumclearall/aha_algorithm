#include <stdio.h>
#include<stdlib.h>
int main()
{
	printf("请依此输入三个不同的数  按“enter”执行下一步\n") ;
	int a,b,c,d;
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	printf("c=");
	scanf("%d",&c);
	if (a<b) {
		d=a;a=b;b=d;
	} 
	if(a<c){
		d=a;a=c;c=d;
	}
	if (b<c){
		d=b;b=c;c=d;
	}
	printf("%d %d %d",a,b,c);
	system("pause");
	return 0; 
}
