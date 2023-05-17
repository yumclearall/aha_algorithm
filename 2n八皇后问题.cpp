#include <cstdio>
bool a[10][10];
bool book[2][10],yx[2][20],xy[2][20];
int ans,n;
void dfs(int p, int x){
	if(p == 1 && x == n){
		ans++;
		return;
	}
	if(p == 0 && x == n){
		dfs(p + 1, 0);
		return;
	}
	for(int i = 0; i < n; i++){
		if(!a[x][i] && !book[p][i] && !yx[p][x + i] && !xy[p][x - i + n]){
			a[x][i] = book[p][i] = yx[p][x + i] = xy[p][x - i + n] = true;
			//printf("%d %d %d\n",x,i,p);
			dfs(p, x + 1);
			a[x][i] = book[p][i] = yx[p][x + i] = xy[p][x - i + n] = false;
		}
	}
} 
int main(){
	scanf("%d",&n);
	//a[0][1] = true;	
	dfs(0,0);
	printf("%d\n",ans);
	return 0;
}
