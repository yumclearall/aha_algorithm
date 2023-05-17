#include <stdio.h>
int puzzle[10][10]={{0,0,1,0},
					{0,0,0,0},
					{0,1,0,1},
					{0,0,0,1}};
int next[4][2]={{0,1},{1,0},{0,-1},{-1,0}}; 
int m=3,n=2,min=9999;int book[4][4];
void dfs(int x,int y,int step)
{
	if(x==m&&y==n)
	{
		if(min>step)
			min=step;
		return;
	}
	int tx,ty;
	for(int k=0;k<=3;k++)
	{
		tx=x+next[k][0];
		ty=y+next[k][1];
		if(tx<0||tx>3||ty<0||ty>3)
			continue;
		else if(puzzle[tx][ty]==0&&book[tx][ty]==0)
		{
			book[tx][ty]=1;
			dfs(tx,ty,step+1);
			book[tx][ty]=0;
		}
	}
}
