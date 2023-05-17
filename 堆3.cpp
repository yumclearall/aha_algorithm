#include <stdio.h>//99 5 36 7 22 17 46 12 2 19 25 28 1 92
int h[15],i; 
void siftdown(int i)
{
	if(i==1) 
		return;	
	int flag=0,t;
	while(i!=1 && flag!=1)
	{
		/*if(i%2==1)
			if(h[i-1]>h[i])
				t=i-1;*/
		if(h[i]<h[i/2])
			t=i/2;
		else
			t=i;
		if(t!=i)
		{
			int k=h[i];h[i]=h[t];h[t]=k;
			i=t;
		}
		else
			flag=1;
	}	
}
int main()
{
	int m=1;
	for(int i=1;i<15;i++)
	{
		scanf("%d",&h[i]);
		siftdown(i);	
	}
	for(int i=1;i<15;i++)
	{
		printf("%d ",h[i]);
		if(i==m)
		{
			printf("\n");
			m*=2;m++;
		}
	}
	getchar();getchar();
	return 0;
}
