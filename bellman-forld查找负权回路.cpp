#include <stdio.h>//5 5 2 3 2 1 2 -3 1 5 5 4 5 2 3 4 3
int main()
{
	int v[100],u[100],w[100];
	int dis[100],bak[100],n,m,i,k,flag;
	int inf=999999,check;
	scanf("%d%d",&n,&m);
	for(i=1;i<=n;i++)
		dis[i]=inf;
	dis[1]=0;
	for(i=1;i<=m;i++)
		scanf("%d%d%d",&u[i],&v[i],&w[i]);
	for(k=1;k<=n-1;k++)
	{
		for(i=1;i<=n;i++) bak[i]=dis[i]; 
		for(i=1;i<=m;i++)
			if(dis[v[i]]>dis[u[i]]+w[i])
				dis[v[i]]=dis[u[i]]+w[i];
		check=0;
		for(i=1;i<=m;i++)
			if(bak[i]!=dis[i]) 
			{	check=1;break;}
			if(check==0) break;
	}	
	flag=0;
	for(i=1;i<=m;i++)
		if(dis[v[i]]>dis[u[i]]+w[i]) flag=1;
	if(flag==1)
		printf("\n此图含有负权回路！");
	else
	{
		for(i=1;i<=n;i++)
			printf("%d ",dis[i]);	
	}
	getchar();getchar();
	return 0;
}
