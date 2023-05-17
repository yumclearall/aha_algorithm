#include <stdio.h>//平均时间复杂度O（NlogN） ps:二分思想 
int a[101],n; 
void quicksort(int left,int right)
{
	if(left>right) return;
	int i=right,j=left,k,temp;
	temp=a[left];
	while(i!=j)
	{	while(a[i]>=temp&&i>j) i--;
		while(a[j]<=temp&&i>j) j++;
		k=a[i];a[i]=a[j];a[j]=k;	} 
	a[left]=a[i];a[i]=temp;
	quicksort(left,i-1);
	quicksort(i+1,right);}
int main()
{
	printf("输入N个数，将对其进行排序，请输入n的值:"); 
	scanf("%d",&n);
	printf("请输入%d个数：",n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	quicksort(0,n-1);
	for(int i=0;i<=n-1;i++)
		printf("%d ",a[i]);}
