#include <stdio.h>
int rotation[5][5],book[5][5];
int next[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
int num=1;
void dfs(int x,int y)
{
	int tx,ty;
	for(int i=0;i<=3;i++)
	{
		tx=x+next[i][0];
		ty=y+next[i][1];
		if(tx<1||ty<1||tx>4||ty>4)
			continue;
		else if(book[tx][ty]==0)
		{
			book[tx][ty]=1;
			rotation[tx][ty]=++num;
			dfs(tx,ty);
		}
	}
	return ;
}
int main()
{
	rotation[1][1]=1;book[1][1]=1;
	dfs(1,1);
	for(int i=1;i<=4;i++)
	{
		for(int j=1;j<=4;j++)
			printf(" %d	",rotation[i][j]);
		printf("\n\n");
	}
	getchar();getchar();
	return 0;
} 
