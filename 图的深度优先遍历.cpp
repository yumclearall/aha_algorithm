#include <stdio.h>//1 2 2 1 5 10 2 3 3 2 5 7 3 1 4 4 5 5 5 3 3
int a[6][6],book[6],min=99;
void dfs(int cur,int dis)
{
	if(dis>=min) return;
	printf("%d: %d\n",cur,dis);
	if(cur==5)
	{
		if(dis<min) min=dis;
		return;
	}
	for(int i=1;i<=5;i++)
	{
		if(a[cur][i]!=999999 &&book [i]==0)
		{
			book[i]=1;
			dfs(i,a[cur][i]+dis);
			book[i]=0;
		}
	}
	return;
}
int main()
{
	int b,c,d;
	for(int i=1;i<=5;i++)
		for(int j=1;j<=5;j++)
		{
			if(i==j) a[i][j]=0;
			else a[i][j]=999999;
		}
	for(int i=1;i<=7;i++)
	{
		scanf("%d%d%d",&b,&c,&d);
		a[b][c]=a[c][b]=d;
	}
	dfs(1,0); 
	printf("%d",min);
	getchar();getchar();
	return 0;
}
