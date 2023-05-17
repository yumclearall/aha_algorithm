#include <stdio.h>
int  island[15][15]={{0,0,0,0,0,0,0,0,0,0,0},
					 {0,1,2,1,0,0,0,0,0,2,3},
					 {0,3,0,2,0,1,2,1,0,1,2},
					 {0,4,0,1,0,1,2,3,2,0,1},
					 {0,3,2,0,0,0,1,2,4,0,0},
					 {0,0,0,0,0,0,0,1,5,3,0},
					 {0,0,1,2,1,0,1,5,4,3,0},
					 {0,0,1,2,3,1,3,6,2,1,0},
					 {0,0,0,3,4,8,9,7,5,0,0},
					 {0,0,0,0,3,7,8,6,0,1,2},
					 {0,0,0,0,0,0,0,0,0,1,0}	};
int book[15][15],next[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
struct sign
{
	int x,y,step;
} s[226];
int main()
{
	int head,tail,step,num;
	head=1;tail=1;step=0;num=0;
	s[tail].x=6;
	s[tail].y=8;
	s[tail++].step=step++;
	int tx,ty; 
	while(head<tail)
	{
		for(int i=0;i<=3;i++)
		{
			tx=s[head].x+next[i][0];
			ty=s[head].y+next[i][1];
			if(tx<1||ty<1||tx>10||ty>10)
				continue;
			else if(island[tx][ty]>0&&book[tx][ty]==0)
			{
				book[tx][ty]=1;
				s[tail].x=tx;
				s[tail].y=ty;
				s[tail++].step=step++;
				num++;
			}
		}
		head++;
	}
	printf("%d",num);
	getchar();getchar();
	return 0;
}
