#include <cstdio>
int sum;
bool a[10],x1[20],x2[20];
bool check(int r,int i){
	return !a[i] && !x1[r + i] && !x2[r - i + 8];
}
void dfs(int r){
	if (r == 8){
		sum++;
		return;
	}
	for(int i = 0; i < 8; i++){
		if (check(r,i)){
			a[i] = x1[r + i] = x2[r - i + 8] = true;
			dfs(r + 1);
			a[i] = x1[r + i] = x2[r - i + 8] = false;
		}
	}
}
int main(){
	dfs(0);
	printf("%d\n",sum);
	return 0;
}
