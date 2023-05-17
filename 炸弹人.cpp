#include <stdio.h>
char boom[13][14]={ "#############",
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
int position(int x,int y)
{
	if(boom[x][y]=='G')
		return 1;
	else if(boom[x][y]=='.')
		return 0;
}
int main()
{//字符串后默认存在\0，所以分配空间要多余实际数量 
int max=0,p=0,q=0,i,j;
for(i=0;i<=12;i++)
	for(j=0;j<=12;j++)
		if(boom[i][j]=='.')
		{
			int sum=0;int x,y;
			x=i;y=j;
			while(boom[x][y]!='#')
			{
				sum+=position(x,y);
				x--;
			}
			x=i;y=j;
			while(boom[x][y]!='#')
			{
				sum+=position(x,y);
				x++;
			}
			x=i;y=j;
			while(boom[x][y]!='#')
			{
				sum+=position(x,y);
				y--;
			}
			x=i;y=j;
			while(boom[x][y]!='#') 
			{
				sum+=position(x,y);
				y++;
			}
			
			if(max<sum)
			{
				max=sum;p=i;q=j;
			}
		}
		printf("将炸弹放置在（%d,%d）可以消灭最多%d个敌人！",p,q,max);
getchar();getchar();
return 0;
}
