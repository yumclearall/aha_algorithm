#include <stdio.h>
int fun(int x)
{
	int num=0;
	int f[10]={6,2,5,5,4,5,6,3,7,6};
	while(x/10!=0)
	{
		num+=f[x%10];
		x=x/10;
	}
	num+=f[x];
	return num;
}
int main()
{
	int a,sum=0; 
	printf("-----������ʽ��A+B=C��-----\n������ĸ�����");
	scanf("%d",&a);
	for(int i=0;i<1111;i++)
		for(int j=0;j<1111;j++)
			{
				int k=i+j;
				if(fun(i)+fun(j)+fun(k)==a-4&&(i!=j)&&(j!=k)&&(i!=k))
					{
						printf("%d+%d=%d\n",i,j,k);
						sum++;	}
			}
	printf("����ƴ��%d�ֲ�ͬ�ĵ�ʽ��",sum);
	getchar();getchar();
	return 0;		
} 
