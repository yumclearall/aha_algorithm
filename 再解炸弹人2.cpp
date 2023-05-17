#include <stdio.h>
char boom[15][15]={ "#############",
"#GG.GGG#GGG.#",
"###.#G#G#G#G#",
"#.......#..G#",
"#G#.###.#G#G#",
"#GG.GGG.#.GG#",
"#G#.#G#.#.###",
"##G...G.....#",
"#G#.#G###.#G#",
"#...G#GGG.GG#",
"#G#.#G#G#.#G#",
"#GG.GGG#G.GG#",
"#############"
};
int book[15][15];
int ejm[4][2]={{1,0},{0,1},{-1,0},{0,-1}};
int number(int x,int y)
{
	int i,j,sum=0;
	i=x,j=y;
	while(boom[i][j]!='#')
		if(boom[i++][j]=='G')	sum++;
	i=x,j=y;		
	while(boom[i][j]!='#')
		if(boom[i--][j]=='G')	sum++;
	i=x,j=y;
	while(boom[i][j]!='#')
		if(boom[i][j++]=='G')	sum++;
	i=x,j=y;
	while(boom[i][j]!='#')
		if(boom[i][j--]=='G')	sum++;
	return sum;
}
struct position
{
	int x,y,step,f,num;
}p1[225];
int main()
{
	int head,tail,tx,ty,sum,max=0,end;
	book[3][3]=1;
	head=1;tail=1;
	p1[tail].x=3;p1[tail].y=3;
	p1[tail].f=0;p1[tail].step=0;
	p1[tail++].num=number(3,3);
	while(head<tail)
	{
		for(int i=0;i<=3;i++)
		{
			tx=p1[head].x+ejm[i][0];
			ty=p1[head].y+ejm[i][1];
			if(tx<=0||ty<=0||tx>=12||ty>=12)
				continue;
			else if(boom[tx][ty]=='.'&&book[tx][ty]==0)
			{
				book[tx][ty]=1;
				p1[tail].x=tx;
				p1[tail].y=ty;
				p1[tail].f=head;
				p1[tail].step=p1[head].step+1;
				p1[tail++].num=sum=number(tx,ty);
				if(sum>max)
				{
					max=sum;
					end=tail-1;
				}
			}
		} 
		head++;
	}
	printf("从位置（3，3）到位置（%d，%d）",p1[end].x,p1[end].y);
	printf("共走了%d步，最多可消灭敌人%d个！\n",p1[end].step,p1[end].num);
	printf("行动路线为：\n");
	do{
		printf("(%d,%d)  ",p1[end].x,p1[end].y);
		end=p1[end].f;
	}while(end);
	getchar();getchar();
	return 0;
} 
