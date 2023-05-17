#include <stdio.h>
int a[100],flag;
void dfs(int i)
{
	flag=0;
	if(i==1) return;
	while(flag!=1)
	{
		if(a[i]<a[i-2])
		{	
			int k=a[i];	a[i]=a[i-2];	a[i-2]=k;
			i=i-2;
			}
		if(a[i]<a[i/2])
		{	
			int k=a[i];	a[i]=a[i/2];	a[i/2]=k;
			i=i/2;
			}
		else flag=1;
	}
	
}
int main()
{
	int flag=0,i=1,m=1,n;
	scanf("%d",&n);
	while(n>=0)
	{
		a[i]=n;
		dfs(i);
		i++;
		scanf("%d",&n);	
	}
	for(int j=1;j<i;j++)
	{
		printf("%d ",a[j]);
		if(j==m)
		{
			printf("\n");
			m*=2;m++;
		}
	}
	getchar();getchar();
	return 0; 	
} 
