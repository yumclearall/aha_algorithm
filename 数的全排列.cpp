#include <stdio.h>
int a[10],book[10],n;
void dfs(int step)
{
	if(step==n+1)
	{
		for(int i=1;i<=n;i++)
			printf("%d ",a[i]);	printf("\n");
			return;
	}
	for(int i=1;i<=n;i++)
	{
		if(book[i]==0)
		{
		a[step]=i;
		book[i]=1;
		dfs(step+1);
		book[i]=0;	}
	}
	return;
}
int main()
{
	printf("-----数的全排列！-----\n输入一个1-9的数：");
	scanf("%d",&n);
	dfs(1);
	getchar();getchar();
	return 0;
}

