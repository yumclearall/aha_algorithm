#include <stdio.h>//34 2 5 12 7 17 25 19 36 99 22 28 46 92
int h[15],i;
void siftdown(int i)
{
	int flag=0,n=15,t;
	while(i*2<=n && flag==0)
	{
		if(h[i]>h[i*2])
			t=i*2;
		else			
			t=i;
		if(i*2+1<=n)
			if(h[t]>h[i*2+1])
				t=i*2+1;
		if(t!=i)
		{
			int k=h[i];	h[i]=h[t];	h[t]=k;
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
		scanf("%d",&h[i]);
	siftdown(1);
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
