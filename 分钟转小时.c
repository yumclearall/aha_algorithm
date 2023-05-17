#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    printf("请输入一个数，按“enter”执行下一部：");
    int a,b,c;
    scanf("%d",&a);
    b=a/60;c=a%60;
    if(c/10==0)
    printf("%d分钟是%d小时0%d分钟",a,b,c);
    else
    printf("%d分钟是%d小时%d分钟",a,b,c);	
    system("pause") ; 
	return 0;
}
