#include <stdio.h>
/*int puzzle[20][20]={{1,1,1,1,1,1,1,1,1,1,1,1,1},
					{1,0,0,1,0,1,1,0,0,0,0,0,1},
[13][11]			{1,1,0,0,0,0,0,0,1,1,0,0,1},
					{1,0,0,1,0,1,1,1,1,1,1,1,1},
������Χ			{1,0,1,1,1,0,1,0,0,1,1,1,1},
					{1,0,1,1,1,0,1,1,0,0,0,0,1},
					{1,0,0,0,0,0,0,0,1,1,1,0,1},
					{1,1,1,0,1,1,1,0,0,1,0,0,1},
					{1,0,0,0,0,0,1,1,1,1,0,1,1},
					{1,0,1,1,1,0,0,0,0,0,0,1,1},
					{1,1,1,1,1,1,1,1,1,1,1,1,1}};  */
int puzzle[20][20]={{1,1,1,1,1,1,1,1,1,1},
					{1,0,0,1,0,1,1,0,0,1},
/*[9][8]*/			{1,1,0,0,0,0,0,0,1,1},
					{1,0,0,1,0,1,1,1,1,1},
					{1,0,1,1,1,0,0,0,0,1},
					{1,0,1,1,1,0,1,1,0,1},
					{1,0,0,0,0,0,0,0,1,1},
					{1,1,1,0,1,1,1,0,0,1}}; 
int book[15][15];
int next[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
struct note
{	int x;int y;
	int f;int s;	
}arm[401];
int main()
{	int head=1,tail=1,tx,ty,flag=1,enter=1; 
	book[head][tail]=1;
	arm[tail].x=1;
	arm[tail].y=1;
	arm[tail].f=0;
	arm[tail].s=0;
	tail++;
	while(flag)
	{	for(int i=0;i<=3;i++)
		{	tx=arm[head].x+next[i][0];
			ty=arm[head].y+next[i][1];
			if(tx<=0||tx>=13||ty<=0||ty>=11)
				continue;
			else if(puzzle[tx][ty]==0&&book[tx][ty]==0)
			{	arm[tail].x=tx;
				arm[tail].y=ty;
				arm[tail].f=head;
				arm[tail++].s=arm[head].s+1;
				book[tx][ty]=1;
				if(tx==4&&ty==7)
				{	flag=0;
					printf("���·��Ϊ��%d\n���·��Ϊ��\n",arm[--tail].s);
					do	{
						printf("(%d,%d) ",arm[tail].x,arm[tail].y) ;
						tail=arm[tail].f;
						if((enter++)%4==0) printf("\n");
						}while(tail);
					printf("\n�㷨��ִ��%d�Σ�",head);
					break;		}	}	}
		if(flag==1) head++;	}
	getchar();getchar();
	return 0;}
