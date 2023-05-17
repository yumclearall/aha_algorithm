#include <stdio.h>
int  island[15][15]={{0,0,0,0,0,0,0,0,0,0,0},
					 {0,1,2,1,0,0,0,0,0,2,3},
					 {0,3,0,2,0,1,2,1,0,1,2},
					 {0,4,0,1,0,1,2,3,2,0,1},
					 {0,3,2,0,0,0,1,2,4,0,0},
					 {0,0,0,0,0,0,0,1,5,3,0},
					 {0,0,1,2,1,0,1,5,4,3,0},
					 {0,0,1,2,3,1,3,6,2,1,0},
					 {0,0,0,3,4,8,9,7,5,0,0},
					 {0,0,0,0,3,7,8,6,0,1,2},
					 {0,0,0,0,0,0,0,0,0,1,0}	};
int book[15][15],books[15][15];int sum,num;
int next[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
void dfs(int x,int y)
{
	
	int tx,ty;
	for(int i=0;i<=3;i++)
	{
		tx=x+next[i][0];
		ty=y+next[i][1];
		if(tx<1||ty<1||tx>10||ty>10)
			continue;
		else if(island[tx][ty]>0&&book[tx][ty]==0)
		{
			book[tx][ty]=1;
			sum++;
			dfs(tx,ty);
		}
	}
	return;
}
void dfs(int x,int y,int num)
{
	
	int tx,ty;
	for(int i=0;i<=3;i++)
	{
		tx=x+next[i][0];
		ty=y+next[i][1];
		if(tx<1||ty<1||tx>10||ty>10)
			continue;
		else if(island[tx][ty]>0&&books[tx][ty]==0)
		{
			books[tx][ty]=1;
			island[tx][ty]=num;
			dfs(tx,ty,num);
		}
	}
	return;
}
int main()
{
	dfs(6,8);
	for(int i=1;i<11;i++)
		for(int j=1;j<11;j++)
		{
			if(island[i][j]>0&&books[i][j]==0)
			{
					num--;dfs(i,j,num);
					
			}
		}

	printf("小A降落的位置（6，8）岛屿面积为%d！\n这片区域共有%d个岛屿！",sum,-num);
	printf("\n打印标记后的岛：\n");
	for(int i=1;i<11;i++)
	{
		for(int j=1;j<11;j++)	
			printf(" %d	",island[i][j]);
		printf("\n\n");
	}
	getchar();getchar();
	return 0;
}
