#include <stdio.h>//√∞≈›≈≈–Ú   ±º‰∏¥‘”∂»O(N^2) 
struct student{
	char name[21];
	int score;
}a[10];//5 huhu 5 haha 3 xixi 5 hengheng 2 gaoshou 8
int main()
{
	int count;
	scanf("%d",&count);
	for(int i=0;i<count;i++)
	{
		scanf("%s %d",&a[i].name,&a[i].score);
	}
	for(int i=0;i<count;i++)
		for(int j=0;j<=i;j++)
		{
			if(a[i].score<a[j].score)
				{struct student t=a[i];a[i]=a[j];a[j]=t;}
	}
	for(int i=0;i<count;i++)
		printf("%s\n",a[i].name);
} 
