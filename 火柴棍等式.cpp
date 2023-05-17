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
	printf("-----火柴棍等式（A+B=C）-----\n输入火柴的个数：");
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
	printf("共可拼出%d种不同的等式！",sum);
	getchar();getchar();
	return 0;		
} 
