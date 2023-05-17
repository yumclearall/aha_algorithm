#include <stdio.h>//5 5 2 3 2 1 2 -3 1 5 5 4 5 2 3 4 3
int main()
{
	int v[100],u[100],w[100];
	int dis[100],n,m,i,k,flag;
	int inf=999999;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
		dis[i]=inf;
	dis[1]=0;
	for(i=1;i<=m;i++)
		scanf("%d%d%d",&u[i],&v[i],&w[i]);
	for(k=1;k<=n-1;k++)
		for(i=1;i<=m;i++)
			if(dis[v[i]]>dis[u[i]]+w[i])
				dis[v[i]]=dis[u[i]]+w[i];			
	for(i=1;i<=n;i++)
		printf("%d ",dis[i]);	
	getchar();getchar();
	return 0;
}
