#include <stdio.h>
int a[10]={6,3,5,7,2,4,9,10,8,1};
void quicksort(int left,int right)
{
	int i,j,k,temp;
	if(left>right) return;
	i=left;j=right;temp=a[left];
	while(i<j)
	{
		while(a[j]>=temp&&i<j) j--;
		while(a[i]<=temp&&i<j) i++;
		if(i!=j)
		{k=a[i];a[i]=a[j];a[j]=k;} 
	}
	a[left]=a[i];a[i]=temp;
	quicksort(left,i-1);
	quicksort(i+1,right);
}
int main()
{
	quicksort(0,9);
	for(int i=0;i<=9;i++) printf("%d ",a[i]);
}

