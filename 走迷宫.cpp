#include <stdio.h>//0Ϊ�ո�1Ϊ�ϰ� 
int p,q,a=4,b=3,min=99999;
int puzzle[20][20]={{0,0,1,0},
					{0,0,0,0},
					{0,0,1,0},
					{0,1,0,0},
					{0,0,0,1}}; 
int book[20][20];
int next[4][2]={{0,1},
				{1,0},
				{0,-1},
				{-1,0}};
void dfs(int x,int y,int step)
{
	if(x==p&&y==q)
	{
		if(step<min)
			min=step;
		return;
	}
	int tx,ty;
	for(int k=0;k<=3;k++)
	{
		tx=x+next[k][0];
		ty=y+next[k][1];
		if(tx<0||tx>a||ty<0||ty>b)
			continue;
		else if(puzzle[tx][ty]==0&&book[tx][ty]==0)
		{
			book[tx][ty]=1;
			dfs(tx,ty,step+1);
			book[tx][ty]=0;
		}
	}
	return;//void �Զ�����  
};
int main()
{
	printf("-----���Թ� (�����������) -----");
	printf("\n�Ƿ����������Թ��ṹ(1���ǣ���������)");
	int f;
	scanf("%d",&f);
	if(f==1)
	{
		printf("�����Թ���������������");
		scanf("%d%d",&a,&b);
		printf("¼���Թ�(0Ϊ�ո�1Ϊ�ϰ� )��");
		for(int i=0;i<a;i++)
			for(int j=0;j<b;j++)
				scanf("%d",puzzle[i][j]); 
	}
	else printf("�ṹ�Զ���ʼ����");
	int c,d;
	printf("\n�������λ��:");scanf("%d%d",&c,&d);
	book[c][d]=1;
	printf("�����յ�λ��:");scanf("%d%d",&p,&q);
	dfs(c,d,0);
	printf("��̲���=%d",min);
	getchar();getchar();
	return 0; 
}
