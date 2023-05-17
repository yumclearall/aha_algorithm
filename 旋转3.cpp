#include <stdio.h>
int rotation[5][5],book[5][5];
int num;
int main()
{
	for(int i=1;i<=4;i++)
	{
		for(int j=1;j<=4;j++) 
			rotation[i][j]=++num;
	}
	for(int i=1;i<=4;i++) 
	{
		for(int j=1;j<=4;j++) 
			book[i][j]=rotation[5-j][i];
	}
	for(int i=1;i<=4;i++)
	{
		for(int j=1;j<=4;j++)
			printf(" %d	",book[i][j]);
		printf("\n\n");
	}
	getchar();getchar();
	return 0;
}
