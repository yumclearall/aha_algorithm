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
	int a;
	printf("�����루1��ˮƽ��ת��2����ֱ��ת��3��˳ʱ����ת��4.��ʱ����ת����\n");
	scanf("%d",&a);
	switch(a)
	{
	case 1:
	for(int i=1;i<=4;i++)
	{
		for(int j=1;j<=4;j++) 
			book[i][6-j-1]=rotation[i][j];
	}	break;
	case 2:
	for(int i=1;i<=4;i++)
	{
		for(int j=1;j<=4;j++) 
			book[6-j-1][i]=rotation[i][j];
	}	break;
	case 3:
	for(int i=1;i<=4;i++)
	{
		for(int j=1;j<=4;j++) 
			book[j][i]=rotation[j][i];
	}	break;
	case 4:
	for(int i=1;i<=4;i++)
	{
		for(int j=1;j<=4;j++) 
			book[i][6-j-1]=rotation[i][j];
	}	break;
	default: printf("����");
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
