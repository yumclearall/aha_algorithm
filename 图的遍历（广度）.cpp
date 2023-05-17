#include <stdio.h>//1 2 1 3 1 5 2 4 3 5
int main()
{
	int a[6][6];
	int b,c,cur,book[6]={0};
	int que[26];
	for(int i=1;i<=5;i++)
		for(int j=1;j<=5;j++)
			{
				if(i==j) a[i][j]=0;
				else a[i][j]=999999;
			}
	for(int i=1;i<=5;i++)
	{
		scanf("%d%d",&b,&c);
		a[b][c]=1;a[c][b]=1;
	}
	int head,tail;
	head=tail=1;tail++;
	que[head]=1;
	book[1]=1;
	while(head<tail)
	{
		
		cur=que[head];	
		for(int i=1;i<=5;i++)
		{
			if(a[cur][i]==1&&book[i]==0)
			{
				book[i]=1;
				que[tail++]=i;
			}
			if(tail>5)
				break;
		}
		head++;
	}
	for(int i=1;i<=5;i++)
		printf("%2d",que[i]);
	 
	getchar();getchar();
	return 0;
} 
