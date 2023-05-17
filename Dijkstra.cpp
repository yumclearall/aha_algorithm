#include <stdio.h>
int main()
{
	int a[6][6],dis[6]={0},book[6]={0},min,u;
	for(int i=0;i<=5;i++)
		for(int j=0;j<=5;j++)
			if(i==j) a[i][j]=0;
			else a[i][j]=99999;
	a[0][1]=1;a[0][2]=12;a[1][2]=9;
	a[1][3]=3;a[2][4]=5;a[3][2]=4;
	a[3][4]=13;a[3][5]=15;a[4][5]=4;
	for(int i=0;i<6;i++)
		dis[i]=a[0][i];
	book[0]=1;
	for(int i=0;i<5;i++)
	{
		min=99999;
		for(int j=0;j<6;j++)
		{
			if(book[j]==0 && dis[j]<min)
			{
				min=dis[j];
				u=j;
			}
		}
		book[u]=1;
		for(int v=0;v<6;v++)
		{
			if(a[u][v]<9999)
				if(dis[v]>dis[u]+a[u][v])
					dis[v]=dis[u]+a[u][v];
		}
	}
	for(int i=0;i<6;i++)	printf("%d  ",dis[i]);
	getchar();getchar();
	return 0;
}


