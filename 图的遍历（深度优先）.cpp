#include <stdio.h>//5 5 1 2 1 3 1 5 2 4 3 5
int e[15][15],sum,a;
int book[15];
void dfs(int cur)
{
	printf("%d ",cur);
	sum++;
	if(sum==a) return;
	for(int i=1;i<=a;i++)
	{
		if(e[cur][i]==1&&book[i]==0)
		{
			book[i]=1;
			dfs(i);
		}
	}
	return ;
}
int main()
{
	int b,c,d;
	printf("输入表格规格：");
	scanf("%d",&a);
	printf("顶点的数量：");
	scanf("%d",&b);
	printf("相连的顶点：\n");
	for(int i=1;i<=a;i++)
		for(int j=1;j<=a;j++)
		{
			if(i==j)	e[i][j]=0;
			else e[i][j]=99999999;
		}
	for(int i=1;i<=b;i++)
		{
			scanf("%d%d",&d,&c);
			e[d][c]=1;
			e[c][d]=1;
		}
	printf("输出：");
	book[1]=1;
	dfs(1);
	getchar();getchar();
	return 0;
	}
