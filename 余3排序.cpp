#include <stdio.h>	//28 67 32 45 86 97 97 79 86 97 08 09 98 97 96 9 9 49 5 95 86 85 84 83 78 73 72 80 81
#include <algorithm>	//9 1 2 3 4 5 6 7 8 9
using namespace std;
int s[105];
bool cmp(int x,int y){
	if(x % 3 != y % 3){
		return x % 3 < y % 3;	}
	else{
		return x < y;
	}
	
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i = 0;i < n; i++){
		scanf("%d",&s[i]);
	}
	sort(s,s + n,cmp);
	printf("%d",s[0]);
	for(int i = 1;i < n; i++){
		printf(" %d",s[i]);
	}
	printf("\n");
	return 0;
}
