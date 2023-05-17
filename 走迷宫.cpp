#include <stdio.h>//0为空格，1为障碍 
int p,q,a=4,b=3,min=99999;
int puzzle[20][20]={{0,0,1,0},
					{0,0,0,0},
					{0,0,1,0},
					{0,1,0,0},
					{0,0,0,1}}; 
int book[20][20];
int next[4][2]={{0,1},
				{1,0},
				{0,-1},
				{-1,0}};
void dfs(int x,int y,int step)
{
	if(x==p&&y==q)
	{
		if(step<min)
			min=step;
		return;
	}
	int tx,ty;
	for(int k=0;k<=3;k++)
	{
		tx=x+next[k][0];
		ty=y+next[k][1];
		if(tx<0||tx>a||ty<0||ty>b)
			continue;
		else if(puzzle[tx][ty]==0&&book[tx][ty]==0)
		{
			book[tx][ty]=1;
			dfs(tx,ty,step+1);
			book[tx][ty]=0;
		}
	}
	return;//void 自动返回  
};
int main()
{
	printf("-----走迷宫 (深度优先搜索) -----");
	printf("\n是否自行输入迷宫结构(1、是，其他、否)");
	int f;
	scanf("%d",&f);
	if(f==1)
	{
		printf("输入迷宫的行数、列数：");
		scanf("%d%d",&a,&b);
		printf("录入迷宫(0为空格，1为障碍 )：");
		for(int i=0;i<a;i++)
			for(int j=0;j<b;j++)
				scanf("%d",puzzle[i][j]); 
	}
	else printf("结构自动初始化！");
	int c,d;
	printf("\n输入起点位置:");scanf("%d%d",&c,&d);
	book[c][d]=1;
	printf("输入终点位置:");scanf("%d%d",&p,&q);
	dfs(c,d,0);
	printf("最短步数=%d",min);
	getchar();getchar();
	return 0; 
}
