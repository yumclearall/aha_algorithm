#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    printf("������һ����������enter��ִ����һ����");
    int a,b,c;
    scanf("%d",&a);
    b=a/60;c=a%60;
    if(c/10==0)
    printf("%d������%dСʱ0%d����",a,b,c);
    else
    printf("%d������%dСʱ%d����",a,b,c);	
    system("pause") ; 
	return 0;
}
