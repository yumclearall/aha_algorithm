#include <stdio.h>
int pipeline[10][10]={{0,0,0,0,0},
					 {0,5,3,5,3},
					 {0,1,5,3,0},
					 {0,2,3,5,1},
					 {0,6,1,1,5},
					 {0,1,5,5,4}};
int book[10][10],flag,top;
struct position
{
	int x,y;
}p[100];
void dfs(int x,int y,int front)
{
	if(x==5&&y==4+1)
	{
		flag=1;
		return;		}
	else if(x<1||y<1||x>5||y>4)
		return ;
	else if(book[x][y]==0)
	{
		book[x][y]=1;
		p[top].x=x;
		p[top++].y=y;
		int i=pipeline[x][y];
		if(i==5||i==6)
		{
			if(front==1)		dfs(x,y+1,1);
			else if(front==2)	dfs(x+1,y,2);
			else if(front==3)	dfs(x,y-1,3);
			else if(front==4)	dfs(x-1,y,4);
		}
		else if(i<5&&i>0)
		{
			if(front==1||front==3)		
			{
				dfs(x+1,y,2);
				dfs(x-1,y,4);
			}
			else if(front==2||front==4)	
			{
				dfs(x,y+1,1);
				dfs(x,y-1,3);
			}
			book[x][y]==0;
			top--;
		}
	}
	return ;
}
int main()
{
	dfs(1,1,1);
	if(flag==1) printf("找到路径!\n输出路径：\n");
	for(int i=0;i<top;i++)
		printf("(%d,%d)	",p[i].x,p[i].y);
	getchar();getchar();
	return 0;
}

