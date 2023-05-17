#include <stdio.h>//10 9 1 2 3 4 5 2 4 6 2 6 8 7 9 7 1 6 2 4
int f[11],n,m,k,sum;
void init()
{
	for(int i=1;i<11;i++)
		f[i]=i;	
}
int getf(int v)
{
	if(f[v]==v) return v;
	else
	{
		f[v]=getf(f[v]); 
		return f[v];
	}
}
void merge(int v,int u)
{
	int t1,t2;
	t1=getf(v);
	t2=getf(u);
	if(t1!=t2)
		f[t2]=t1;
}
int main()
{
	init();
	int i,x,y;
	scanf("%d %d",&n,&m);
	for(i=1;i<=m;i++)
	{
		scanf("%d %d",&x,&y);
		merge(x,y);	
	}
	for(i=1;i<=n;i++)
	{
		if(f[i]==i)
		{
			sum++;
		}
	}
	printf("%d",sum);
	getchar();getchar();
	return 0;
}
