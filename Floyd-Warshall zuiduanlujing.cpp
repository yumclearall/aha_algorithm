#include <stdio.h>//1 2 2 1 3 6 1 4 4 2 3 3 3 1 7 3 4 1 4 1 5 4 3 12
int main()
{
	int a[5][5],b,c,d;
	for(int i=0;i<=3;i++)
		for(int j=0;j<=3;j++)
		{
			if(i==j) a[i][j]=0;
			else a[i][j]=999999;
		}
	for(int i=0;i<=7;i++)
	{
		scanf("%d%d%d",&b,&c,&d);
		a[b-1][c-1]=d;
	}
	for(int k=0;k<=3;k++)
		for(int i=0;i<=3;i++)
			for(int j=0;j<=3;j++)
				if(a[i][k]<100&&a[k][j]<100&&a[i][j]>a[i][k]+a[k][j])
					a[i][j]=a[i][k]+a[k][j];
	for(int i=0;i<=3;i++)
		{
			for(int j=0;j<=3;j++)
			printf("%d  ",a[i][j]);
		printf("\n\n");
		}
	getchar();getchar();
	return 0;
} 
