#include<stdio.h>
#define N 4
int main()
{	int x,y,n;
	int rotation[N][N];
	for(n=x=y=0;n<N*N;)	{
	rotation[y][x]=++n;
	if	   (x>=y&&x+y<N-1)	x++;
	else if(x>y&&x+y>=N-1)	y++;
	else if(x<=y&&x+y>N-1)	x--;
	else if(x<y&&x+y<=N-1)
		if (y-x-1)	y--;
		else		x++;	}
	for(y=0;y<N;y++)	{
		for(x=0;x<N;x++)
		printf("%2d	",rotation[y][x]);
		printf("\n\n");		}
	getchar();getchar();
	return 0;	}

