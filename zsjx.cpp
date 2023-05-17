#include <stdio.h>
int main(){
	int a[10]={0};
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	int m=0;
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			for(int k=j+1;k<n;k++)
				if((a[i]+a[j]>a[k]) && (a[i]+a[k]>a[j]) && (a[j]+a[k]>a[i]))
					m++;
	printf("%d",m);
	return 0;
	}

