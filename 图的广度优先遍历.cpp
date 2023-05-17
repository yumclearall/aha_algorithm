#include <stdio.h>//1 2 1 3 2 3 2 4 3 4 3 5 4 5
int main()
{
	int a[6][6],book[6]={0},b,c;
	for(int i=1;i<=5;i++)
		for(int j=1;j<=5;j++)
		{
			if(i==j) a[i][j]=0;
			else a[i][j]=999999;
		}
	for(int i=1;i<=7;i++)
	{
		scanf("%d%d",&b,&c);
		a[b][c]=1;
	}
	int head,tail,que1[26],que2[26];
	int min=5,cur;
	head=tail=1;
	que1[head]=1;que2[head]=0;
	tail++;
	book[1]=0;
	while(head<tail)
	{
		cur=que1[head];
		for(int i=1;i<=5;i++)
		{
			if(a[cur][i]==1&&book[i]==0)
			{
				book[i]=1;
				que2[tail]=que2[head]+1;
				que1[tail]=i;
				if(que1[tail]==5)
				{
					min=que2[tail];
					break;
				}
				tail++;
			}
		}
		head++;
	}
	printf("%d",min);
	getchar();getchar();
	return 0;
}
