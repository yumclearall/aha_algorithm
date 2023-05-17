#include <cstdio>	//5 -1 2 -1 2 -1
int cd[100];
int main(){
	int n,end = -9999;
	scanf("%d",&n);
	for(int i = 0;i < n; i++){
		scanf("%d",&cd[i]);
	}
	for(int i = 0;i < n; i++){
		for(int j = i ;j < n; j++){
			int sum = 0;
			for(int k = i;k <= j; k++){
				sum += cd[k];
			}
			if(sum > end)	end = sum;
		}
	}
	printf("%d\n",end);
	return 0; 
}
