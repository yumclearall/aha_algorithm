#include <stdio.h>	//10 10 1 2 3 4 5 6 7 8 9 10 3 1 4 6 7 8 9 9 4 12
#include <algorithm>
using namespace std;
int a[10],b[10],c[10];
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i = 0;i < n; i++){
		scanf("%d",&a[i]);
	} 
	for(int i = 0;i < m; i++){
		scanf("%d",&b[i]);
	} 
	sort(b,b + m);
	int in = 0;
	for(int i = 0;i < n;){
		if(a[i] >= b[in]){
			c[i]++;
			in++;
		}
		else i++;
	}
	for(int i = 0;i < n;i++){
		printf("%d\n",c[i]);
	} 
	return 0;
} 
