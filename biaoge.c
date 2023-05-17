#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[3][4]={{1,2},{1,2,3,4}},i,j,x;
	/*for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
		{
			a[i][j]=x;
	
			x++;
		}
	}*/
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
			printf("%d",a[i][j]);
	
		printf("\n");
	}
	printf("\n");
	system("pause");
	return 0;
}
