#include <stdio.h>
int f(int x)
{
	if(x==2 || x==1) return 1;
	else return f(x-1)+f(x-2);
}
int main()
{
	printf("쳲�����ǰnλ����������n����");
	int x,a;scanf("%d",&x);
	printf("�������ʽ��1��2����");
	scanf("%d",&a);
	if(a==1)
		for(int i=1;i<=x;i++) printf("%d ",f(i)) ;
	else if(a==2)
		for(int i=1;i<=x;i++) printf("%d : %d\n",i,f(i));
	else printf("��ʽ����"); 
	return 0; 
}
