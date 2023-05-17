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
"#############",
};
int book[15][15];
int position[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
int max,i,j;
int largest(int x,int y)
{
	int num=0,ii,jj;
	ii=x;jj=y;
	while(boom[ii][jj]!='#')
		if(boom[ii++][jj]=='G')	num++;
	ii=x;jj=y;
	while(boom[ii][jj]!='#')
		if(boom[ii--][jj]=='G')	num++;
	ii=x;jj=y;
	while(boom[ii][jj]!='#')
		if(boom[ii][jj++]=='G')	num++;
	ii=x;jj=y;
	while(boom[ii][jj]!='#')
		if(boom[ii][jj--]=='G')	num++;
	return num;
	
};
void dfs(int x,int y)
{	
	int num=largest(x,y);
	if(num>max)
	{
		max=num;
		i=x,j=y; 
	}
	int tx,ty;
	for(int a=0;a<=3;a++)
	{
		tx=x+position[a][0];
		ty=y+position[a][1];
		if(tx<=0||ty<=0||tx>=12||ty>=12)
			continue;
		else if(boom[tx][ty]=='.'&&book[tx][ty]==0)
		{
			book[tx][ty]=1;
			dfs(tx,ty);	
		}
	}
	return;
};
int main()
{
	book[3][3]=1;
	dfs(3,3);
	printf("位置在（%d,%d）最多可消灭%d个敌人！",i,j,max);
	getchar();getchar();
	return 0; 
}
