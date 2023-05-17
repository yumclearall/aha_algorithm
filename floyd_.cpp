#include <stdio.h>
int main()
{
	int a[5][5];
	for(int i=0;i<=3;i++)
		for(int j=0;j<=3;j++)
			if(i==j) a[i][j]=0;
			else a[i][j]=99999;
	a[0][1]=2;a[0][2]=6;a[0][3]=4;a[1][2]=3;
	a[2][0]=7;a[2][3]=1;a[3][0]=5;a[3][2]=12;
	for(int k=0;k<=3;k++)
		for(int i=0;i<=3;i++)
			for(int j=0;j<=3;j++)
				if(a[i][k]<999&&a[k][j]<999&&a[i][j]>a[i][k]+a[k][j])
					a[i][j]=a[i][k]+a[k][j]; 
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
			printf("%d ",a[i][j]);
		printf("\n");		}
	getchar();getchar();
	return 0;
}
