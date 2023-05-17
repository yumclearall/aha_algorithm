#include<stdio.h>
int main(){
	int a[100],n,max;
	int b[]={1,3,7,8};
	bool flag[10001]={0};
	int i,j;
	max = 0 ;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",a+i);
		if(a[i]>max)
			max = a[i] ;
	}

	for(i=2;i<=max;i++){
		for(j=0 ; j<4 && b[j]<i ; j++ ){
			if(flag[i-b[j]]==0){
				flag[i] = 1 ;
				break;
			}
		}
	}
	for(i=0;i<n;i++)
		printf("%d\n",flag[a[i]]);
	getchar();getchar();
	return 0; 
}
